#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item total, val;
    if (std::cin >> total) {
        while (std::cin >> val) {
            total += val;
        }
    }

    std::cout << total << std::endl;

    return 0;
}