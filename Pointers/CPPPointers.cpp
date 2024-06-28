#include <iostream>

// Accessing string from namespace std.
using std::string;

int main() {

    // int n = 5;

    // std::cout << &n << ": " << n << std::endl;

    // int *ptr = &n;
    // std::cout << ptr << ": "<< *ptr << std::endl;

    // *ptr = 10;
    // std::cout << ptr << ": "<< *ptr << std::endl;
    // std::cout << &n << ": " << n << std::endl;

    // n = 15;
    // std::cout << ptr << ": "<< *ptr << std::endl;
    // std::cout << &n << ": " << n << std::endl;

    // int m = *ptr;
    // std::cout << &m << ": " << m << std::endl;


    // Initiliasation
    int v;
    int *ptr1 = nullptr;

    // Null pointers will initially have a value of 0.
    // Best practice to initialise as zero otherwise, they'll contain addresses which takes up memory.
    std::cout << ptr1 << std::endl;

    // Assigning value to v
    v = 100;

    // Passing the address of v to our pointer.
    ptr1 = &v;

    // Printing the address of v and its value using the pointer.
    // Both should have a matching address and value.
    std::cout << &v << ": "<< v << std::endl;
    std::cout << ptr1 << ": "<< *ptr1 << std::endl;

    return 0;
}