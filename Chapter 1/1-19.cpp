#include <iostream>

int main() {
    std::cout << "Enter the inclusive lower and upper bounds of the range" << std::endl;
    int a, b;
    std::cin >> a >> b;

    int i = a <= b ? a : b;
    int max = a <= b ? b : a;
    while (i <= max) {
        std::cout << i++ << std::endl;
    }

    return 0;
}