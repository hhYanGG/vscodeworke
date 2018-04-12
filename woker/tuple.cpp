#include <iostream>
#include <tuple>
#include <complex>
#include <string>
using namespace std;
int main()
{
    tuple<int, float, string> t1 (41, 63, "hello");
    cout << get<0>(t1) << endl;

    cout << get<1>(t1) << endl;

    cout << get<2>(t1) << endl;

    auto t2 = make_tuple(12, 2.33, "fuck");

    cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl;
    while(1);
}