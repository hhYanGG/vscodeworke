#include <set>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    set<int> coll = {1,2,3,4,5,6,7,8,9};
    copy(coll.begin(), coll.end(),
                    ostream_iterator<int>(cout, " "));
    int num = coll.erase(3);
    cout << "number of removed element " << num << endl;
    copy(coll.begin(), coll.end(),
                    ostream_iterator<int>(cout, " "));
    while(1);
}