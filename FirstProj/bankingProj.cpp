#include <iostream>
#include <iomanip>

void showBalance(double balance) {
    std::cout << "Your balance: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}
double deposit() {
    double amount = 0.0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    return amount;
}
double withdraw(double balance) {
    double amount = 0.0;

    do {
        std::cout << "Enter amount the amount to withdraw: ";
        std::cin >> amount;

        if (amount > balance) {
            std::cout << "Insufficient funds\n";
        } else if (amount < 0) {
            std::cout << "Invalid amount\n";
        }
    } while (amount > balance || amount <= 0);


    return amount;
}

int printSelection() {
    int choice = 0;

    std::cout << "\nPlease make your selection\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Exit\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    return choice;
}

int main() {

    double balance = 123.00;
    int choice = 0;

    std::cout << "------- WELCOME TO THE BANK -------\n";

    do {
        choice = printSelection();

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting";
                break;
            default:
                std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}