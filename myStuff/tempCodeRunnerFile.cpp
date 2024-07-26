#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool findArray(int arr[], int size, int target);

int main() {
    srand(time(NULL));

    int r = 100000;
    int isSeven = 0;

    for (int i = 0; i < r; i++) {
        int substats[5] = {-1, -1, -1, -1, -1}; // initialize with a value not in range [0, 12]

        for (int j = 0; j < 3; j++) {
            int num = rand() % 13;

            if (!findArray(substats, 5, num)) {
                substats[j] = num;
            } else {
                j--;
            }
        }

        if (findArray(substats, 5, 7)) {
            isSeven++;
        }
    }

    cout << isSeven << endl;
    cout << (double)isSeven / r * 100 << endl;

    return 0;
}

bool findArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}
