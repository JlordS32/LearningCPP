#include <iostream>

using namespace std;

int main() {

    int luckyNumbers[5] = {134, 31, 53, 63, 53};

    cout << *(luckyNumbers + 4) << endl;
    cout << *(&luckyNumbers[4]) << endl;

    return 0;
}