#include "user.h"
#include "transactions.h"
#include <iostream>
using namespace std;

int main() {
    User u;
    Transaction t;

    int option;

    while (true) {
        cout << "\n1. Enter user details\n"
             << "2. Show user details\n"
             << "3. Deposit amount\n"
             << "4. Withdraw amount\n"
             << "5. Show balance\n"
             << "6. Exit\n";

        cin >> option;

        switch(option) {
            case 1:
                u.getInfo();
                break;
            case 2:
                u.showDetails();
                break;
            case 3:
                t.deposit();
                break;
            case 4:
                t.withdraw();
                break;
            case 5:
                t.showBalance();
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Enter a valid option.\n";
        }
    }

    return 0;
}
