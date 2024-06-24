#include <iostream>

int main() {
    int month;

    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "January" << std::endl;
            break;
        case 2:
            std::cout << "February" << std::endl;
            break;
        case 3:
            std::cout << "March" << std::endl;
            break;
        default:
            std::cout << "Invalid month" << std::endl;
            break;
    }

}