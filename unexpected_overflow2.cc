#include <iostream>
#include <typeinfo>

int main(void) {
    std::cout << typeid(0x80000000).name() << '\n';
    std::cout << typeid(2).name() << '\n';
    std::cout << typeid(2 * 0x80000000).name() << '\n';
    return 0;
}