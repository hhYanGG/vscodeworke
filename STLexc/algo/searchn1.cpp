#include "algostuf.hpp"
using namespace std;

int main()
{
    deque<int> coll;

    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll);

    // find four consecutive elements with 3
    deque<int>::iterator pos;
    pos = search_n(coll.begin(), coll.end(),//range
                   4 ,                      //count
                   3 );                     //value
    if (pos != coll.end()){
        cout << "four consecutive elements with 3 "
             << "start with " << distance(coll.begin(), pos) +1
             << ". element" << endl;
    }
    else{
        cout << "no four consecutive element with value 3 found"
             << endl;
    }
    pos = search_n(coll.begin(), coll.end(), 4, 3, greater<int>());
    if(pos != coll.end()){
        cout << "four concecutive elements with value > 3 "
        << "start with " << distance(coll.begin(), pos) + 1
        << "element " << endl;
    }else{
        cout << "no four consecutive element with value 3 found"
             << endl;
    }
    while(1);
}