#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows;
    cols = rows;

    // This is a pointer that is pointing to a pointer variable of type int with the size of rows.
    int **table = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    table[0][1] = 1;

    cout << *(*(table + 0) + 1) << endl;

    // Deleting double array pointers

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }
    delete[] table;

    if (table == nullptr)
        cout << "Table deleted";

    return 0;
}