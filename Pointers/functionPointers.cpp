#include <iostream>
using namespace std;

// A function that takes a function pointer that returns a type double and takes two parameters of type double.
double calculate(double x, double y, double (*funcPtr)(double, double)) {
    return funcPtr(x, y);
}

int main()
{   
    // Lambda functions
    // auto addition = [](double x, double y) { return x + y; };
    // auto substraction = [](double x, double y) { return x - y; };
    // auto multiplication = [](double x, double y) { return x * y; };
    // auto division = [](double x, double y) { return x / y; };

    double x = 30.4454;
    double y = 6.7;

    // I love lambdas uwu
    cout << "Addition: " << calculate(x, y, [](double x, double y) { return x + y; }) << endl;
    cout << "Subtraction: " << calculate(x, y, [](double x, double y) { return x - y; }) << endl;
    cout << "Multiplication: " << calculate(x, y, [](double x, double y) { return x * y; }) << endl;
    cout << "Division: " << calculate(x, y, [](double x, double y) { return x / y; }) << endl;
    
    return 0;
}
