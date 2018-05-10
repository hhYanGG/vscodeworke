#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<int> coll;
    for(int i = 1; i <= 6; ++i){
        coll.push_back(i);
        coll.push_front(i);
    }
    copy(coll.begin(),coll.end(),ostream_iterator<int>(cout," "));
    cout << endl;
    auto end = remove(coll.begin(), coll.end(), 3);
    copy(coll.begin(), coll.end(),ostream_iterator<int>(cout," "));
    cout << endl;
    cout << "distance to end";
    cout << distance(end, coll.end());
    cout << endl;
    cout << "erase";
    coll.erase(end, coll.end());
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    while(1);
    return 0;
}
