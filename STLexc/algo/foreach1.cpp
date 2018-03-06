//algo/foreach1.cpp
#include "algostuf.hpp"
using namespace std;

//function called for each element
void print (int elem)
{
    cout << elem << ' ';
}

int main()
{
    vector <int> coll;
    INSERT_ELEMENTS(coll, 1, 9);
    for_each(coll.begin(), coll.end(),
            print);
    cout << endl;
    getchar();
}
