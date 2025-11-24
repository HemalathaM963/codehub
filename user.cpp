#include "user.h"
#include <iostream>
using namespace std;

User::User() {
    name = "";
    accno = "";
}

void User::getInfo() {
    cout << "Enter name of account holder: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accno;

}

void User::showDetails() {
    cout << "Account holder: " << name << " | Account number: " << accno << endl;
}

