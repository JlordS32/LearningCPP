#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Fire";
    std::string y = "Water";

    swap(x, y);

    std::cout << x << " and " << y << std::endl;

    return 0;
}

void swap(std::string &x, std::string &y) {
    std::string temp;
    temp = x;

    x = y;
    y = temp;
}