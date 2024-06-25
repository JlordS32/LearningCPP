#include <iostream>

void sort(int array[], int size);
int main() {
    int array[] = {10, 3, 4, 6, 7, 8, 9, 1, 2, 5};
    int length = sizeof(array)/sizeof(array[0]);

    sort(array, length);

    for (int element : array) {
        std::cout << element << std::endl;
    }

    return 0;
}

void sort(int array[], int size) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}