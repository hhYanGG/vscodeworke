#include <iostream>
#include <array>
using namespace std;
const int n = 5;
int total(array<int, n> *arrayA, array<int, n> *arrayB);
int main()
{
    array<int, n> arrayA = {250, 263, 5, 1, 54};
    array<int, n> arrayB = {6, 7, 8, 9, 10};
    cout << "the answer is " << total(&arrayA, &arrayB);
     
}
int total(array<int, n> *arrayA, array<int, n> *arrayB)
{
    int tot = 0;
    for(int i = 0; i <= n-1; i++)
    {
        tot += (*arrayA)[i] * (*arrayB)[i] ;
    }
    return tot;
}