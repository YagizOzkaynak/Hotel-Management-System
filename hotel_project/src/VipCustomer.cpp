#include "VipCustomer.h"

VipCustomer::VipCustomer(const string& name, int room, const string& phone, int vipLevel)
    : CustomerBase(name, room, phone), vipLevel(vipLevel) {}

void VipCustomer::printInfo() const {
    cout << "[VIP LEVEL " << vipLevel << "] " << name 
         << " | Room: " << roomNumber << " | Phone: " << phone << endl;
}

