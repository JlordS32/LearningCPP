#include <iostream>

using namespace std;

void printNumber(int *numberPtr);
void printCharacter(char *charPtr);
void print(void *ptr, char type);

int main()
{
    int number = 5;
    char letter = 'A';

    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}

void printNumber(int *numberPtr)
{
    std::cout << *numberPtr << std::endl;
}

void printCharacter(char *charPtr)
{
    std::cout << *charPtr << std::endl;
}

void print(void *ptr, char type) {
    if (ptr == nullptr) {
        cout << "Pointer is null." << endl;
        return;
    }

    switch(type) {
        case 'b':
            cout << *((bool*)ptr) << endl;
            break;
        case 'i':
            cout << *((int*)ptr) << endl;
            break;
        case 'c':
            cout << *((char*)ptr) << endl;
            break;
        case 'd':
            cout << *((double*)ptr) << endl;
            break;
        default:
            break;
    } 
}