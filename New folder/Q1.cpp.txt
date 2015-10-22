
1. Provide method definitions for the class described in Chapter Review
Question 5
and write a short program that illustrates all the features.

#include <iostream>
#include "bankaccount.h"
using namespace std; 

int main()
 {
     
    BankAccount Cairo("Cairo Ignatkov","04852214896",20000);
    Cairo.ShowInfo();
 
    BankAccount Empty;
    Empty.ShowInfo();
 
    Cairo.Withdraw(15000.13);
    Cairo.ShowInfo();
    Cairo.Deposit(7500.25);
    Cairo.ShowInfo();
 
    Empty.Deposit(5000.45);
    Empty.ShowInfo();
 
    cin.get();
    cin.get();
    return 0;
}

