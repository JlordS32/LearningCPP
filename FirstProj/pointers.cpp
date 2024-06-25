#include <iostream>

int main() {

    std::string name = "Bro";
    int age = 21;
    std::string freePizzaz[5] = {"Cheese", "Peperoni", "Hawaiian", "Meat", "Veggie"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzaz = freePizzaz;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;

    std::cout << pFreePizzaz[1] << std::endl;

    return 0;
}