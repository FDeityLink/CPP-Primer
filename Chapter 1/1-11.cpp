#include <iostream>

int main() {
    std::cout << "Enter the inclusive lower and higher bounds of the range" << std::endl;
    int lower, higher;
    std::cin >> lower >> higher;

    int i = lower;
    while (i <= higher) {
        std::cout << i++ << std::endl;
    }

    return 0;
}