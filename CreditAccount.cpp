#include "CreditAccount.h"

void CreditAccount::borrow(double amount) {
	if ((debt + amount) <= creditLimit)
	{
		debt += amount;
		cout << "Вы успешно взяли долг на сумму " << amount << endl;
		cout << "Сумма ваших долгов составляет " << debt << endl;
	}
	else
		cout << "Вы не можете взять данную сумму в долг ибо привысите кредитный лимит\n";
}
void CreditAccount::replay(double amount) {
	if (amount <= 0)
		cout << "Ошибка ввода!";
	if (amount < debt)
	{
		debt -= amount;
		cout << "Вы успешно погасили часть долгов на сумму " << amount << " !\n";
		cout << "Сумма ваших долгов составляет " << debt << endl;
	}
	else if (amount >= debt)
	{
		debt = 0;
		cout << "Вы успешно погасиливсе свои долги!\n";
	}
}
void CreditAccount::applyMonthlyInterest() {
	debt = debt + debt * (monthlyInteresyRate / 100);
	cout << "Вам начислены прценты по долгу!";
	cout << "Сумма ваших долгов составляет " << debt << endl;
}
void CreditAccount::printInfo() {
	cout << "Сумма ваших долгов составляет: " << debt << endl;
	cout << "Ваш кредитный лимит: " << creditLimit << endl;
	cout << "Процентная ставка на ваш кредит: " << monthlyInteresyRate << endl;
}

/*Тимофей — CreditAccount (Кредитный счёт)
Поля: debt (текущий долг), creditLimit (максимальный лимит), monthlyInterestRate
Методы:
конструктор с параметрами (limit, rate),
borrow(double amount) — взять в долг (если не превышает лимит),
repay(double amount) — погасить часть долга,
applyMonthlyInterest() — начислить проценты на долг,
printInfo() — вывести долг, лимит и ставку.*/