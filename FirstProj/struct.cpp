#include <iostream>

struct student
{
    std::string name;
    int age;
    float gpa;
};

struct Animal
{
    void (*speak)();
};

int main()
{
    student student1 = {"Bro", 21, 3.5};
    student student2;
    Animal dog = {[](){ std::cout << "Woof!" << std::endl; }};

    dog.speak();

    student2.name = "Nerd";
    student2.age = 22;
    student2.gpa = 4.0;

    std::cout << student1.name << " " << student1.age << " " << student1.gpa << std::endl;
    std::cout << student2.name << " " << student2.age << " " << student2.gpa << std::endl;    

    return 0;
}