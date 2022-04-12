#include <iostream>
#include <concepts>
#include <vector>

template<typename T>
concept Integral = std::is_integral<T>::value;


int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;

    std::vector<int> myVec{1, 2, 3};
    for (Integral auto v: myVec) std::cout << v << std::endl;
}