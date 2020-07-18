#include <iostream>

int main(void) {
    uint64_t v = 0x80000000 * 2;
    std::cout << std::hex << v << std::endl;
    return 0;
}