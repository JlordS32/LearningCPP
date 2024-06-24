#include <iostream>

int main() {
    srand(time(NULL));
    int num, guess;
    int tries = 0;

    std::cout << "***** NUMBER GUESSING GAME *****" << std::endl;
    num = rand() % 100 + 1;

    do {
        
        std::cout << "Pick a number from 1 to 100: ";
        std::cin >> guess;

        if (guess > num) {
            std::cout << "Too high!" << std::endl;
            tries++;
        } 
        else if (guess < num) {
            std::cout << "Too low!" << std::endl;
            tries++;
        }
        else {
            tries++;
            std::cout << "You guessed it in " << tries << " tries!" << std::endl;
            break;
        }

        std::cout << tries << std::endl;

    } while (guess != num);

    return 0;
}