#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> coll;
    vector<int>::iterator pos;
    coll.push_back(2);
    coll.push_back(5);
    coll.push_back(4);
    coll.push_back(1);
    coll.push_back(6);
    coll.push_back(3);

    pos = max_element(coll.begin(), coll.end());
    cout << "max ele " << *pos << endl;
    pos = min_element(coll.begin(), coll.end());
    cout << "min ele " << *pos << endl;

    sort(coll.begin(), coll.end());

    pos = find(coll.begin(), coll.end(), 3);

    reverse(pos, coll.end());
    for(pos = coll.begin(); pos != coll.end(); ++pos)
    {
        cout << *pos << ' ';
    }
    cout << endl;
    return 0;

}