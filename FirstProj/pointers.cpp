#include <iostream>

int main() {

    // Null pointers initialisation
    std::string *pName = nullptr;
    int *pAge = nullptr;
    std::string *pFreePizzaz = nullptr;

    std::string name = "Bro";
    int age = 21;
    std::string freePizzaz[5] = {"Cheese", "Peperoni", "Hawaiian", "Meat", "Veggie"};

    pName = &name;
    pAge = &age;
    pFreePizzaz = freePizzaz;

    std::string y = *pName;

    std::cout << &y << std::endl;
    std::cout << pName << std::endl;
    std::cout << &name << std::endl;

    return 0;
}