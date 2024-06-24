#include <iostream>

int main() {

    // ternary operator;

    int grade = 5;

    std::cout << (grade >= 60 ? "Passed" : "Failed") << std::endl;

    int number = 11;

    number % 5 == 0 ? std::cout << "Number is divisible by 5\n" : std::cout << "Number is not divisible by 5\n";


    bool hungry = false;

    !hungry ? std::cout << "Time to eat" : std::cout << "We can relax";

    return 0;
}