#include "SavingsAccount.h"
#include "CheckingAccount.h"


int main() {
    SavingsAccount a(1000.0, 0.05);

    a.deposit(500);
    a.withdraw(200);
    a.applyMonthlyInterest();
    a.printInfo();

    CheckingAccount c(184393.95, 0, 4.87);
    c.deposit(10000);
    c.withdraw(34000);
    c.printInfo();
    c.resetTransactions();
    c.printInfo();

}