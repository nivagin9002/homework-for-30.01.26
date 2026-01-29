#include "SavingsAccount.h"


int main() {
    SavingsAccount account(1000.0, 0.05);

    account.deposit(500);
    account.withdraw(200);
    account.applyMonthlyInterest();
    account.printInfo();

    return 0;
}