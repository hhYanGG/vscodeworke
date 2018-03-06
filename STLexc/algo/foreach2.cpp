// algo/foreach2.cpp
#include "algostuf.hpp"
using namespace std;

//function object that adds the value with which it is initialized
template <class T>
class AddValue{
    private:
        T theValue; // value to add
    public:
        // constuctor initializes the value to add
        AddValue(const T& v) : theValue(v){

        }
        void operator() (T& elem) const {
            elem += theValue;
        }
};
int main()
{
    vector<int> coll;

    INSERT_ELEMENTS(coll, 1, 9);

    //add ten toeach element
    for_each(coll.begin(), coll.end(),
            AddValue<int>(10));
    PRINT_ELEMENTS(coll);

    for_each(coll.begin(), coll.end(),
            AddValue<int>(*coll.begin()));
    PRINT_ELEMENTS(coll);
    getchar();
}