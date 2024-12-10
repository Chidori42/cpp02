#include <iostream>
#include <cmath>

int main() {
    float number = 1234.4321f;
    int FRACTIONAL_BITS = 8;

    int fixed = static_cast<int>(std::round(number * (1 << 8)));

    std::cout<< fixed << std::endl;
    return 0;
}
