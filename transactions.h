#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "user.h"
#include <iostream>
using namespace std;

class Transaction {
private:
    float bal;
    float amount;
public:
    Transaction();
    void deposit();
    void withdraw();
    void showBalance() const;

};

#endif
