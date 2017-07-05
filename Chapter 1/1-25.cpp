#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item total;

    if (std::cin >> total) {
        Sales_item transaction;

        while (std::cin >> transaction) {
            if (total.isbn() == transaction.isbn()) {
                total += transaction;
            }
            else {
                std::cout << total << std::endl;
                total = transaction;
            }
        }

        std::cout << total << std::endl;
        return 0;
    }
    else {
        std::cout << "No data given" << std::endl;
        return -1;
    }
}