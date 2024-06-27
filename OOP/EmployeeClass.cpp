#include <iostream>

using std::string;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string name;
    string company;
    int age;

public:
    Employee(string name, string company, int age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    string getName()
    {
        return this->name;
    }

    string getCompany()
    {
        return this->company;
    }

    int getAge()
    {
        return this->age;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setCompany(string company)
    {
        this->company = company;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void printDetails()
    {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Company: " << this->company << std::endl;
        std::cout << "Age: " << this->age << std::endl;
    }

    void askForPromotion()
    {
        if (this->age > 30) {
            std::cout << this->name << " got promoted!" << std::endl;
        } else {
            std::cout << this->name << " sorry no promotion for you." << std::endl;
        }
    }
};

int main()
{
    Employee employee("John", "Google", 31);

    Employee *pEmployee = &employee;

    std::cout << pEmployee->getCompany() << std::endl;

    employee.setCompany("Apple");

    std::cout << pEmployee->getCompany() << std::endl;
    pEmployee->askForPromotion();

    return 0;
}