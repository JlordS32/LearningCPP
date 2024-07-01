#include <iostream>

using namespace std;

int main()
{
    int someArray[][2] = {{1, 2}, {3, 4}};

    int **pArr = new int *[2];

    cout << pArr << endl;

    return 0;
}