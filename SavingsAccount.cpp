#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialBalance, double rate) : balance(initialBalance), interestRate(rate) {}

void SavingsAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

bool SavingsAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}

void SavingsAccount::applyMonthlyInterest() {
    balance += balance * interestRate / 12.0;
}

void SavingsAccount::printInfo() const {
    std::cout << "баланс: " << balance << std::endl;
    std::cout << "годовая ставка: " << interestRate * 100 << "%" << std::endl;
}