#include "CreditAccount.h"
#include <iostream>
using namespace std;

void CreditAccount::borrow(double amount) {
	if ((debt + amount) <= creditLimit)
	{
		debt += amount;
		cout << "Вы успешно взяли кредит на сумму " << amount << endl;
		cout << "Текущий долг составляет " << debt << endl;
	}
	else
		cout << "Вы не можете взять такую сумму, она превышает лимит кредита\n";
}

void CreditAccount::replay(double amount) {
	if (amount <= 0)
		cout << "Некорректная сумма!";
	else if (amount < debt)
	{
		debt -= amount;
		cout << "Вы погасили часть долга на сумму " << amount << "!\n";
		cout << "Текущий долг составляет " << debt << endl;
	}
	else if (amount >= debt)
	{
		debt = 0;
		cout << "Вы полностью погасили долг!\n";
	}
}

void CreditAccount::applyMonthlyInterest() {
	debt = debt + debt * (monthlyInteresyRate / 100);
	cout << "Начислены проценты за месяц!\n";
	cout << "Текущий долг составляет " << debt << endl;
}

void CreditAccount::printInfo() {
	cout << "Текущий долг: " << debt << endl;
	cout << "Лимит кредита: " << creditLimit << endl;
	cout << "Процентная ставка за месяц: " << monthlyInteresyRate << endl;
}

