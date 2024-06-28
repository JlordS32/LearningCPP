#include <iostream>

int sum(int *x, int *y);

int main() {

    int x = 10;
    int y = 5;
    int z = sum(&x, &y);

    std::cout << z << std::endl;

    return 0;
}

int sum(int *x, int *y) {
    return *x + *y;
}