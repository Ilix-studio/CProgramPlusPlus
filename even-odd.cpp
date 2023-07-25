#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isEven(number)) {
        std::cout << number << " is an even number." << std::endl;
    } else {
        std::cout << number << " is an odd number." << std::endl;
    }

    return 0;
}

