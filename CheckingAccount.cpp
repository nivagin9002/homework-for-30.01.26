//
// Created by ivans on 1/29/2026.
//

#include "CheckingAccount.h"

long CheckingAccount::deposit(double amount) {
    balance = balance + amount - (amount * feePerTransaction);
    transactionCount +=1;
}
long CheckingAccount::withdraw(double amount) {
    balance = balance - amount + (amount * feePerTransaction);
    transactionCount +=1;
}
int CheckingAccount::resetTransactions() {
    transactionCount = 0;
}
void CheckingAccount::printInfo() {
    cout<< transactionCount <<endl;
    cout << balance << endl;
    cout << feePerTransaction << endl;
}
