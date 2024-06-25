#include <iostream>

int main() {
    // Null value 

    int *ptr = nullptr;
    int x = 123;

    ptr = &x;

    if (ptr == nullptr) {
        std::cout << "ptr is null" << std::endl;
    } else {
        std::cout << "address was assigned" << std::endl;
        std::cout << *ptr << std::endl;
    }

    return 0;
}