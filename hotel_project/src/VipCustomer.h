#ifndef VIPCUSTOMER_H
#define VIPCUSTOMER_H

#include "CustomerBase.h"

class VipCustomer : public CustomerBase {
private:
    int vipLevel;

public:
    VipCustomer(const string& name, int room, const string& phone, int vipLevel);
    void printInfo() const override;
};

#endif

