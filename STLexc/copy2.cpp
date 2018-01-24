#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{
    list<int> coll1;
    vector<int> coll2;
    //insert
    for(int i = 1; i <= 9;++i){
        coll1.push_back(i);
    }
    coll2.resize(coll1.size());
    copy(coll1.begin(), coll1.end(),
        coll2.begin());
    deque<int> coll3(coll1.size());
    copy(coll1.begin(),coll1.end(),
        coll3.begin());
    return 0;
}