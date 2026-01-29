#pragma once

#include <iostream>

using namespace std;

/*“имофей Ч CreditAccount ( редитный счЄт)
ѕол€: debt (текущий долг), creditLimit (максимальный лимит), monthlyInterestRate
ћетоды:
конструктор с параметрами (limit, rate),
borrow(double amount) Ч вз€ть в долг (если не превышает лимит),
repay(double amount) Ч погасить часть долга,
applyMonthlyInterest() Ч начислить проценты на долг,
printInfo() Ч вывести долг, лимит и ставку.*/

class CreditAccount {
protected:
	double debt, creditLimit, monthlyInteresyRate;
public:
	CreditAccount(double c, double m) : debt(0),creditLimit(c), monthlyInteresyRate(m){}
	void borrow(double amount);
	void replay(double amount);
	void applyMonthlyInterest();
	void printInfo();
};