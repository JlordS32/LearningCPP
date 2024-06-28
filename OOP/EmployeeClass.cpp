#include <iostream>

using std::string;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
protected:
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

    virtual void printDetails()
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

    virtual void work() {
        std::cout << this->name << " is working..." << std::endl;
    }
};

class Manager : public Employee {
    private:
        string department;

    public:
        Manager(string name, string company, int age) : Employee(name, company, age) {
            this->department = "NA";
        }
        Manager(string name, string company, int age, string department) : Employee(name, company, age) {
            this->department = department;
        }

        string getDepartment()
        {
            return this->department;
        }

        void setDepartment(string department)
        {
            this->department = department;
        }

        void printDetails()
        {
            Employee::printDetails();
            std::cout << "Department: " << this->department << std::endl;
        }

        void work() {
            std::cout << this->name << " is currently managing his employees" << std::endl;
        }
};

class Teacher : public Employee {
    private:
        string subject;

    public:
        Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
            this->subject = subject;
        }

        void printDetails() {
            Employee::printDetails();
            std::cout << "Subject: " << this->subject << std::endl;
        }

        void work() {
            std::cout << this->name << " is teaching " << this->subject << std::endl;
        }
};

int main()
{
    Manager manager("Jane", "Facebook", 35, "Sales");
    Teacher teacher("Jesus", "Google", 35, "Maths");

    Employee *employee1 = &manager;
    Employee *employee2 = &teacher;
    employee1->work();
    employee2->work();
    employee1->printDetails();
    employee2->printDetails();


    return 0;
}