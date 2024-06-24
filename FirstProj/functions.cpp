#include <iostream>

void greetHappyBirthday() {
    std::cout << "Happy Birthday to you!" << std::endl;
}

void greetHappyBirthday(int age) {
    std::cout << "Happy Birthday! You are " << age + 1 << " years old!" << std::endl;
}

void greetHappyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to you, dear " << name << " you are " << age + 1 << " years old" << "!" << std::endl;
}

// With parameters
void getSum(int a, int b) {
    std::cout << "The sum is " << a + b << std::endl;
}

// With return
int getRemainder(int a, int b) {
    return a % b;
}

// Recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int catalan(int n) {
    if (n <= 0) {
        return 1;
    } 

    int result = 0;

    for (int i = 0; i < n; i++) {
        result += catalan(i) * catalan(n - 1 - i);
    }

    return result;
}

int main() {

    greetHappyBirthday();
    greetHappyBirthday(20);
    greetHappyBirthday("Jaylou", 20);
    getSum(10, 20);
    
    int remainder = getRemainder(20, 11);

    std::cout << "The remainder is " << remainder << std::endl;

    int fib = fibonacci(10);
    std::cout << "The 10th fibonacci number is " << fib << std::endl;

    int number = factorial(4);
    std::cout << "The factorial of 3 is " << number << std::endl;

    int catalanNumber = catalan(6);
    std::cout << "The catalan number is " << catalanNumber << std::endl;

    return 0;
}