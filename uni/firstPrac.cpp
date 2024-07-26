#include <iostream>

using namespace std;

double askSales();
double calculateCommission(double sales);

int main() {
    double commission = calculateCommission(askSales());

    cout << "Your commission is: " << commission * 100 << "%" << endl;

    return 0;
}

double askSales() {
    double sales;

    cout << "How much sales did you make?: ";
    cin >> sales;

    return sales;
}

double calculateCommission(double sales) {
    if (sales < 1000) {
        return 0.03;
    } else if (sales < 3000) {
        return 0.035;
    } else {
        return 0.045;
    }
}