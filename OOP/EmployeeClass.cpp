#include <iostream>

using std::string;

class Employee
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

    getName()
    {
        return this->name;
    }

    getCompany()
    {
        return this->company;
    }

    getAge()
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
};

int main()
{
    Employee employee("John", "Google", 22);
    employee.printDetails();

    return 0;
}