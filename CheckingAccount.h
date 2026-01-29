//
// Created by ivans on 1/29/2026.
//

#ifndef UNTITLED_CHECKINGACCOUNT_H
#define UNTITLED_CHECKINGACCOUNT_H


class CheckingAccount {
private:
    long balance;
    int transactionCount;
    long feePerTransaction;
private:
    CheckingAccount(long b,int tc, long fpt) : balance(b), transactionCount(tc), feePerTransaction(fpt) {}
    long deposit(double amount);
    long withdraw(double amount);
    int resetTransactions();
    void printInfo();


};


#endif //UNTITLED_CHECKINGACCOUNT_H