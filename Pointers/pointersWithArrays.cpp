#include <iostream>

using namespace std;

// Function declarations
void getMinAndMax(int numbers[], int size, int *min, int *max);

int main() {

    int numbers[5] = {-34, 43, 599, 33, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int min, max = numbers[0];

    getMinAndMax(numbers, size, &min, &max);

    std::cout << "The minimum number is: " << min << std::endl;
    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}

void getMinAndMax(int numbers[], int size, int *min, int *max) {
    for (int i = 0; i < size; i++) {
        if (*min > numbers[i]) {
            *min = numbers[i];
        }
        if (*max < numbers[i]) {
            *max = numbers[i];
        }
    }
}
