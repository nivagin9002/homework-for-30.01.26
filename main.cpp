#include <iostream>
#include <windows.h>
#include "CheckingAccount.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    SavingsAccount a(1000.0, 0.05);
    a.deposit(500);
    a.withdraw(200);
    a.applyMonthlyInterest();
    a.printInfo();

    cout << endl;

    CheckingAccount c(184393.95, 4.87);
    c.deposit(10000);
    c.withdraw(34000);
    c.printInfo();
    c.resetTransactions();
    c.printInfo();

    cout << endl;

    CreditAccount temp(100000, 10.5);
    temp.printInfo();
    temp.borrow(50000);
    temp.replay(25000);
    temp.printInfo();
    temp.applyMonthlyInterest();
    temp.printInfo();

}