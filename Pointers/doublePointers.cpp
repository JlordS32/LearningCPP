#include <iostream>

using namespace std;

void foo(int **value) {
    value[0][1] = 70;
}

int main()
{
    int someArray[][2] = {{1, 2}, {3, 4}};

    int **pArr = new int *[2];

    pArr[0] = someArray[0];
    pArr[1] = someArray[1];

    cout << "First element of first sub-array: " << pArr[0] << endl;
    cout << "Second element of second sub-array: " << pArr[1] << endl;

    pArr[0][1] = 69;
    foo(pArr);

    cout << someArray[0][1] << endl;

    return 0;
}
