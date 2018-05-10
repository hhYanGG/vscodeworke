#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
int main(int argc, char const *argv[])
{
    list<int> coll;
    for(int i = 1; i <= 6; ++i){
        coll.push_back(i);
        coll.push_front(i);
    }
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout," "));
    cout << endl;
    remove(coll.begin(), coll.end(), 3);
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout," "));
    while(1);
    return 0;
}
