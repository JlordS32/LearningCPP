#include <iostream>

class Student {

    public:
        std::string name;
        int age;
        double gpa;

        void printDetails() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
            std::cout << "GPA: " << gpa << std::endl;
        }

    Student(std::string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

};

int main() {

    Student student1("Spongebob", 25, 3.2);
    Student student2("Dev", 18, 4.5);
    Student student3("Aydin", 18, 3.8);

    Student students[] = {student1, student2, student3};

    for (Student student : students) {
        student.printDetails();
    }

    return 0;
}