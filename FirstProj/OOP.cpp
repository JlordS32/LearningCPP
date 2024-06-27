#include <iostream>

class Human {
    public:
        std::string name;
        std::string job;
        int age;
        
        void eat() {
            std::cout << name << " is eating" << std::endl;
        }
};
int main() {

    Human john;
    john.name = "John";
    john.job = "Programmer";
    john.age = 20;

    john.eat();

    return 0;
}