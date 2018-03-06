//algo/algostuff.hpp
#ifndef ALGOTUFF_HPP
#define ALGOTUFF_HPP
#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<algorithm>
#include <functional>
#include<numeric>
/* PRINT_ELEMENTS()
 * - prints optional C-string optctr flollwoed by
 * - all elements of the collection coll
 * - separated by spaces
 */
template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optctr=" ")
{
    typename T::const_iterator pos;
    std::cout << optctr;
    for (pos = coll.begin(); pos != coll.end(); ++pos){
        std::cout << *pos << ' ';
    }
    std::cout << std::endl;
}
/* INSERT_ELEMENTS (collection, first, last)
* - fill value from first to last into the collection
* - NOTE NO half-open range
*/
template <class T>
inline void  INSERT_ELEMENTS (T& coll, int first, int last)
{
    for(int i=first; i<=last; ++i){
        coll.insert(coll.end(), i);
    }
}

#endif // !ALGOTUFF_HPP
