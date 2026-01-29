#include <iostream>
#include "CheckingAccount.h"
using namespace std;
int main() {

     CheckingAccount c(184393.95, 0, 4.87);
     c.deposit(10000);
     c.withdraw(34000);
     c.printInfo();
     c.resetTransactions();
     c.printInfo();

}