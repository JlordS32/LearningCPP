#include <iostream>

struct Car {
    std::string model;
    int year;
    std::string color;
};

void printCar(Car *car);
void paintCar(Car *car, std::string newColor);

int main() {
    Car car1;
    Car car2;

    car1.model = "Tesla";
    car1.year = 2020;
    car1.color = "Black";

    car2.color = "White";
    car2.model = "F-150";
    car2.year = 2010;

    printCar(&car1);

    paintCar(&car1, "Gold");

    printCar(&car1);

    return 0;
}

void printCar(Car *car) {
    std::cout << "Address: " << car << std::endl;
    std::cout << "Model: " << car->model << std::endl;
    std::cout << "Year: " << car->year << std::endl;
    std::cout << "Color: " << car->color << std::endl;
}

void paintCar(Car *car, std::string newColor) {
    car->color = newColor;
}
