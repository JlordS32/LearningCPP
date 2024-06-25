#include <iostream>

int main() {    

    // fill()

    const int SIZE = 150;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "pizza");
    fill(foods + (SIZE / 2), foods + SIZE, "hamburger");    

    for (std::string food : foods) {
        std::cout << food << std::endl;
    }

    return 0;
}