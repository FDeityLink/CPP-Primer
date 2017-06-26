#include <iostream>

int main() {
    int sum = 0;
    for (int val; std::cin >> val; ) {
        sum += val;
    }

    std::cout << "The sum of the given values is " << sum << std::endl;
    return 0;
}