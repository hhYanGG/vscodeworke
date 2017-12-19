//funcadap.cpp -- using function adapters
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

void Show(double v);
const int LMT = 6;
int main()
{
    using namespace std;
    double arr1[LMT] = {28, 29, 30, 35, 38, 59};
    double arr2[LMT] = {63, 65, 69, 75, 80, 99};
    vector<double> gr8(arr1, arr1 + LMT);
    vector<double> m8(arr2, arr2 + LMT);
    cout.setf(ios_base::fixed);
    cout.precision(1);
    cout << "gr8:\t";
    for_each(gr8.begin(), gr8.end(), Show);
    cout << endl;
    cout << "m8: \t";
    for_each(m8.begin(), m8.end(), Show);
    cout << endl;

    vector<double> sum(LMT);
    transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(),
        plus<double>());
    cout << "sum \t";
    for_each(sum.begin(), sum.end(), Show);
    cout << endl;

    vector<double> prod(LMT);
    transform(gr8.begin(), gr8.end(), prod.begin(),
        bind1st(multiplies<double>(), 2.5));
    cout << " prod \t";
    for_each(prod.begin(), prod.end(), Show);
    cout << endl;
    getchar();

    return 0;
}
void Show(double v)
{
    std::cout.width(6);
    std::cout << v << ' ';
}