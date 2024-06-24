#include <iostream>
#include <ctime>

int main() {
    
    // Pseudo-random = not truly random
    // srand(time(NULL))
    srand(time(0));

    int num = (rand() % 6) + 1;
    std::cout << num << std::endl;

    // Random Event Generator
    int randNum = (rand() % 10) + 1;

    switch(randNum) {
        case 1:
            std::cout << "You win $100" << std::endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            std::cout << "You didn't win anything" << std::endl;
            break;
        case 10:
            std::cout << "You win $10" << std::endl;
            break;
        default:
            std::cout << "Invalid number" << std::endl;
            break;
    }

    return 0;
}