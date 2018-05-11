// foreach11.cpp using foreache
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void print(int elem)
{
    cout << elem << " ";
}

int main(int argc, char const *argv[])
{
    vector<int> coll;
    for(int i = 1; i < 9; ++i){
        coll.push_back(i);
    }
    for_each(coll.begin(), coll.end(), print);
    while(1);
    return 0;
}
