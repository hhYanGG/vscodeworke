// count1.cpp
#include "algostuf.hpp"
using namespace std;

bool isEven(int elem)
{
    return elem % 2 == 0;
}
int main()
{
    vector<int> coll;
    int num;
    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll,"coll: ");

    //count and print elements with value 4
    num = count(coll.begin(), coll.end(),
              4);
    
    cout << "number of elements equal to 4 " << num << endl;

    num = count_if(coll.begin(), coll.end(),
                isEven);
    cout << "number of element with even value : " << num << endl;

    // count element that are greater than value 4
    num = count_if(coll.begin(), coll.end(),
                bind2nd(greater<int>(), 4));
    cout << "number of elements greaterthan 4 : " << num << endl;

    getchar();
}