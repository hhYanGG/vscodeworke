#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main()
{
    list<int> coll;
    for(int i=-3;i <=9; ++i){
        coll.push_back(i);
    }
    list<int>::iterator pos;
    pos = find(coll.begin(), coll.end(),5);
    if(pos != coll.end()){
        //process and print difference from the beging
        cout << " the distance between beging and 5" << endl;
        cout << distance(coll.begin(), pos) << endl;
    }
    else{
        cout << "5 not found " << endl;
    }
}