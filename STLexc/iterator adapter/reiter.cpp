#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> coll;
    for(int i = 1; i < 9; ++i){
        coll.push_back(i);
    }
    copy(coll.crbegin(), coll.crend(),ostream_iterator<int>(cout,"\n"));
    while(1);
    return 0;
}
