#ifndef GITHW_SAVINGSACCOUNT_H
#define GITHW_SAVINGSACCOUNT_H

#include <iostream>

class SavingsAccount {
private:
    double balance;
    double interestRate;

public:
    SavingsAccount(double initialBalance, double interestRate);
    void deposit(double amount);
    bool withdraw(double amount);
    void applyMonthlyInterest();
    void printInfo() const;
};

#endif //GITHW_SAVINGSACCOUNT_H