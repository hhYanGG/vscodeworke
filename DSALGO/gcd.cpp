//计算最大公约数
#include <iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
    int rul= gcd(20,30);
    cout << rul;
    return 0;
}
int gcd(int x, int y)
{
    if(y > 0)
    {
        gcd(y, x % y);
    }
    else if (y == 0)
        return x;
        
}