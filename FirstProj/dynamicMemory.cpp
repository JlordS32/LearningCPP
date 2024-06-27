#include <iostream>

int main() {

    // int *pNum = NULL;

    // pNum = new int;
    // *pNum = 10;
    // std::cout << "Address: " << pNum << " Value: " <<*pNum << std::endl;

    // delete pNum;
    // std::cout << "Address: " << pNum << " Value: " <<*pNum << std::endl;

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: " ;
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i< size; i++) {
        std::cout << "Enter grades #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}