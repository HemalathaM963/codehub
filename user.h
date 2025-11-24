#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string name;
    string accno;
public:
    User();
    void getInfo();
    void showDetails();
    string getName() const;
    string getAccNo() const;
};

#endif
