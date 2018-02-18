// iter/advance1.cpp

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> coll;
    //insert element
    for(int i = 1; i<= 9; ++i)
    {
        coll.push_back(i);
    }
    list<int>::iterator pos = coll.begin();

    //print actual element
    cout << *pos << endl;

    //step three elements foreard
    advance(pos, 3);

    //print actual element
    cout << *pos << endl;

    //step one element backward
    advance(pos, -1);

    //print actual element
    cout << *pos << endl;
}