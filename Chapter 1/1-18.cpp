#include <iostream>

int main() {
    int currentVal = 0, val = 0;

    if (std::cin >> currentVal) {
        int count = 1;
        while (std::cin >> val) {
            if (currentVal == val) {
                ++count;
            }
            else {
                std::cout << currentVal << " has occurred " << count << " time(s)" << std::endl;
                currentVal = val;
                count = 1;
            }
        }

        std::cout << currentVal << " has occurred " << count << " time(s)" << std::endl;
    }

    return 0;
}