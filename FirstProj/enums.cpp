#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main() {

    Day today = tuesday;

    switch (today) {
        case sunday:
            std::cout << "sunday" << std::endl;
            break;
        default:
            std::cout << today << std::endl;
            break;
    }

    return 0;
}