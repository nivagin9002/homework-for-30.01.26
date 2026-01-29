#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee) {
    balance = initialBalance;
    feePerTransaction = fee;
    transactionCount = 0;
}

void CheckingAccount::deposit(double amount) {
    balance += amount - (amount * feePerTransaction);
    transactionCount += 1;
}

void CheckingAccount::withdraw(double amount) {
    balance -= amount + (amount * feePerTransaction);
    transactionCount += 1;
}

void CheckingAccount::resetTransactions() {
    transactionCount = 0;
}

void CheckingAccount::printInfo() {
    cout << "transaction count: " << transactionCount << endl;
    cout << "balance: " << balance << endl;
    cout << "fee per transaction: " << feePerTransaction << endl;
}
