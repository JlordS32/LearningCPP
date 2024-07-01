#include <iostream>
using namespace std;

int getNumber() {

    return 69;
}

string getString() {

    return "hello";
}


int main() {
    cout << &getNumber << endl;
    cout << &getString << endl;

    return 0;
}