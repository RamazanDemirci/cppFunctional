#include <iostream>
#include <concepts>
#include <type_traits>

std::integral auto moduloOf(std::integral auto t) {
    return t % 5;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;

    auto res = moduloOf(8);

    std::cout << res;
}