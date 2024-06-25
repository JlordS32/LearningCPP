#include <iostream>

int main() {

    std::string stringArr[] = {"a", "b", "c", "d"};

    // for (auto i : car) {
    //     std::cout << i << std::endl;
    // }

    // Get the total size of array divided by the size of its type.
    int length = sizeof(stringArr)/sizeof(stringArr[0]);

    // Using for loop
    for (int i = 0; i < length; i++) {
        std::cout << stringArr[i] << std::endl;
    }

    // Using for each
    for(std::string value : stringArr) {
        std::cout << value << std::endl;
    }

    // Integers
    int grades[] = {65, 54, 69, 90, 87, 76};

    for (int grade : grades) {
        std::cout << grade << std::endl;
    }

    return 0;
}