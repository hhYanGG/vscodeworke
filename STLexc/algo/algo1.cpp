#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> coll = {2,24,1,56,3,6,35,78,3,5,7,12,8,34,23};

    auto minpos = min_element(coll.begin(), coll.end());
    cout << "the min ele in coll is " << *minpos << endl;

    auto maxpos = max_element(coll.begin(), coll.end());
    cout << "the max ele in coll is " << *maxpos << endl;

    sort(coll.begin(), coll.end());
    for(auto elem : coll){
        cout << elem << " ";
    }
    cout << endl;
    auto pos = find(coll.begin(), coll.end(), 3);
    reverse(pos, coll.end());

    for(auto elem : coll){
        cout << elem << " ";
    }

    while(1);

    return 0;
}