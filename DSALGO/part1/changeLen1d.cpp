#include <iostream>
int main()
{
    const int oldLen = 10;
    const int newLen = 15;
    int *old = new int[oldLen]{1,2,3,4,5,6,7,8,9};
    int *newAr = new int[newLen];
    for(int i = 0; i < oldLen; i ++)
    {
        newAr[i] = old[i];
        
    }
    delete []old;
    for(int i = 0; i < oldLen; i ++)
    {
        std::cout <<"new " << newAr[i] << std::endl;
        std::cout <<"old " << old[i] << std::endl;
    }
}