#include <iostream>

template <class T>
void insert(T a[], int & n, const T & x)
{
    //把x插入有序数列a[0:n-1]
    //假设数组 a 的容量大于n
    int i;
    for(i = n-1; i >= 0 && x < a[i]; i--)
    {
        a[i+1] = a[i];
    }
    a[i+1] = x;
    n++;
}
int main()
{
    int a[] = {1,3,4,5,6,7,8};
    int in = 2;
    int sz = 7;
    insert(a,sz,in);
    for(int i = 0; i < sz; i++)
        std::cout << a[i];
    std::cout << sz;
    return 0;
}