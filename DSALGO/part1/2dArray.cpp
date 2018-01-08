#include <iostream>
template <class T>
void Array(T ** &x, int Rows, int rowSize[]);
int main()
{
    int **x;
    int Rows = 5;
    int rowSize[] = {1, 2, 3, 4, 5};
    Array( x, Rows, rowSize);


}
template <class T>
void Array(T ** &x, int Rows, int rowSize[])
{
    x = new T * [Rows];
    for(int i = 0; i < Rows; i++)
    {
        x[i] = new int [rowSize[i]];
    }
    std::cout << "true";
    
}