#include <iostream>
//#include "CheckingAccount.h"
#include "CreditAccount.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
     /*CheckingAccount c(184393.95, 0, 4.87);
     c.deposit(10000);
     c.withdraw(34000);
     c.printInfo();
     c.resetTransactions();
     c.printInfo();*/

     cout << endl;
     CreditAccount temp(100000, 10.5);
     temp.printInfo();
     temp.borrow(50000);
     temp.replay(25000);
     temp.printInfo();
     temp.applyMonthlyInterest();
     temp.printInfo();

}