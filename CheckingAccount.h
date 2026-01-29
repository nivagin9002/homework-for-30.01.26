#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount {
private:
    double balance;
    int transactionCount;
    double feePerTransaction;
public:
    CheckingAccount(double initialBalance, double fee);
    void deposit(double amount);
    void withdraw(double amount);
    void resetTransactions();
    void printInfo();
};

#endif
