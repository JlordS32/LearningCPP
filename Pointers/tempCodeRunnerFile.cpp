#include <iostream>

using namespace std;
int main() {
    int size;
    cout << "Size: ";
    cin >> size;

    int* myArray = new int[size];   

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++) {
        cout << myArray[i] << endl;
    }

    int newArray[] = {1, 2, 3};

    for (int arr : newArray) {
        cout << arr << endl;
    }

    return 0;
}
