#include "transactions.h"
#include <iostream>
using namespace std;

Transaction::Transaction() {
    bal = 0.0;
    amount = 0.0;
}

void Transaction::deposit() {
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    bal += amount;
}

void Transaction::withdraw() {
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if(bal < amount){
        cout << "Insufficient balance\n";
        return;
    }
    else{
        bal -= amount;
    }
    
}

void Transaction::showBalance() const {
    cout << "The balance is: $" << bal << endl;
}


