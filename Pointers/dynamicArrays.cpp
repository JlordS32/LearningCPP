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
        cout << *(myArray + i) << endl;
    }

    delete[] myArray; 
    myArray = NULL;

    if (myArray == nullptr) cout << "Empty array at: " << myArray << endl;

    return 0;
}
