#include <iostream>

int main() {

    std::string foods[5];
    std::string userInput;
    int size = sizeof(foods)/sizeof(foods[0]);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food #" << i + 1 << ": ";
        std::getline(std::cin, userInput);

        if (userInput == "q") {
            break;
        } else {
            foods[i] = userInput;
        }
    }

    std::cout << "\nYou like the following food: \n" << std::endl;

    // for (std::string food : foods) {
    //     if (!food.empty()) {
    //         std::cout << food << std::endl;
    //     }
    // }

    // Using weird for loop

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << std::endl;
    }

    std::cout << std::endl;
    
    return 0;
}