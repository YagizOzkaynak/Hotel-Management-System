#ifndef CUSTOMERBASE_H
#define CUSTOMERBASE_H

#include <string>
#include <iostream>
using namespace std;

class CustomerBase {
protected:
    string name;
    int roomNumber;
    string phone;

public:
    CustomerBase(const string& name, int room, const string& phone);
    virtual ~CustomerBase();
    virtual void printInfo() const = 0;

    int getRoom() const;
};

#endif

