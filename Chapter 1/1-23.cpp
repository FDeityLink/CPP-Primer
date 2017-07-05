#include <iostream>
#include "Sales_item.hpp"

int main() {
    Sales_item currentBook, book;

    if (std::cin >> currentBook) {
        int count = 1;
        while (std::cin >> book) {
            if (currentBook.isbn() == book.isbn()) {
                ++count;
            }
            else {
                std::cout << currentBook << " has occurred " << count << " time(s)" << std::endl;
                currentBook = book;
                count = 1;
            }
        }

        std::cout << currentBook << " has occurred " << count << " time(s)" << std::endl;
    }

    return 0;
}