// usedma.cpp -- inheritance friends and DMA
//complie with dma.cpp
#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red" , "Bilmpo" , 4);
    hasDMA map("Mercator" , "Buffalo Keys", 5);
    cout << "Displaying baseDma object:\n";
    cout << shirt << endl;
    cout << "Displaying baseDma object:\n";
    cout << balloon << endl;
    cout << "Displaying baseDma object:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy \n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment: \n";
    cout << map2 << endl;
    return 0;
}
