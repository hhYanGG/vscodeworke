#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
/* function object to compare strings
 - allows yout to set the comparison criterion at runtime
 - allow yout to compare case insensitive
 */
class RuntimeStringCmp{
    public:
        //contants for the comparison criterion
        enum cmp_mode{normal, nocase};
    private:
        //actual comparison mode
        const cmp_mode mode;
        //auxiliary function to compare case insensition
        static bool nocase_compare(char c1, char c2)
        {
            return toupper(c1) < toupper(c2);
        }
    public:
        //constructor: initializes the comparison criterion
        RuntimeStringCmp(cmp_mode m=normal) : mode(m){
        }

        //the comparison
        bool operator() (const string& s1,const string& s2) const{
            if(mode == normal){
                return s1 < s2;
            }
            else{
                return lexicographical_compare(s1.begin(),s1.end(),
                                               s2.begin(),s2.end(),
                                               nocase_compare);
            }
        }
};
/* container type
 * -map with
 * -string keys
 * -string values
 * -the special comparison object type
 */
typedef map<string, string,RuntimeStringCmp> SSMap;
//function tha fills and prints such containers
void fillAndPrint(SSMap& coll);
int main()
{
    //create a container with the defaule comparison criterion
    SSMap coll;
    fillAndPrint(coll);

    //create an object for case-insensitive comparisons
    RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);
    //create a container with the case-insensitive
    //comparisons criterion
    SSMap coll2(ignorecase);
    fillAndPrint(coll2);
    getchar();
}
void fillAndPrint(SSMap& coll){
    //fille insert elements in random order
    coll["Deutschland"] = "Germany";
    coll["deutsch"] = "German";
    coll["Haken"] = "snag";
    coll["arbeiten"] = "work";
    coll["Hund"] = "dog";
    coll["gehen"] = "go";
    coll["Unternehmen"] = "enterprise";
    coll["unternehmen"] = "undertaks";
    coll["gehen"] = "walk";
    coll["Bestatter"] = "undertaker";
    //print elements
    SSMap::iterator pos;
    cout.setf(ios::left, ios::adjustfield);
    for(pos=coll.begin(); pos!=coll.end();++pos){
        cout << setw(15) << pos->first.c_str() << " "
             << pos->second << endl;
    }
    cout << endl;
}
