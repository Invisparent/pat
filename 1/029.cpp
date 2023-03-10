#include <iostream>
#include <iomanip>
#include <iterator>

int main() {
    std::cout << std::fixed << std::setprecision(1) << (*std::istream_iterator<int>(std::cin) - 100) * 1.8;

    return 0;
}
