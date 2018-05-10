#include <iostream>
#include <string>

template <typename T>
inline void PRINT_ELEMENTS(const T& coll, const std::string& opstr = " "){
    std::cout << opstr;
    for(const auto& elem : coll){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}