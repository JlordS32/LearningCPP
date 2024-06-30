#include <iostream>

class Animal {
    public:
        bool alive = true;

    void eat() {
        std::cout << "This animal is eating" << std::endl;     
    }
};

class Dog : public Animal {
    public:

    void bark() {
        std::cout << "This dog is barking" << std::endl;
    }
};

class Cat : public Animal {
    public:

    void meow() {
        std::cout << "This cat is meowing" << std::endl;
    }
};

class Lion : public Animal {
    public:

    void kill(Animal* obj) {
        obj->alive = false;

        std::cout << "The lion kills an animal" << std::endl;
    }
};

int main () {

    Dog *dog;
    Cat cat;
    Lion lion;

    cat.meow();
    dog->bark();
    lion.kill(dog);

    if (dog->alive) {
        std::cout << "The dog is alive" << std::endl;
    } else {
        std::cout << "The dog is dead" << std::endl;
    }

    return 0;
}