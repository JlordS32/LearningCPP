#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 18) {
        std::cout << "You can drink alcohol." << std::endl;
    } 
    else {
        std::cout << "You are too young to do this shit." << std::endl;
    }

    if (age > 59) {
        std::cout << "You can get a 20 percent discount" << std::endl;
    }


    return 0;
}