#ifndef REGULARCUSTOMER_H
#define REGULARCUSTOMER_H

#include "CustomerBase.h"

class RegularCustomer : public CustomerBase {
public:
    RegularCustomer(const string& name, int room, const string& phone);
    void printInfo() const override;
};

#endif

