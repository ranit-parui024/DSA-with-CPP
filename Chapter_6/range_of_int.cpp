#include <iostream>
#include <limits> // Required for std::numeric_limits

int main() {
    std::cout << "Range of int: "
              << std::numeric_limits<int>::min() << " to "
              << std::numeric_limits<int>::max() << std::endl;

    std::cout << "Range of unsigned int: "
              << std::numeric_limits<unsigned int>::min() << " to "
              << std::numeric_limits<unsigned int>::max() << std::endl;

    // You can do this for other integer types as well
    return 0;
}