#include "RegularCustomer.h"

RegularCustomer::RegularCustomer(const string& name, int room, const string& phone)
    : CustomerBase(name, room, phone) {}

void RegularCustomer::printInfo() const {
    cout << "[REGULAR] " << name << " | Room: " << roomNumber
         << " | Phone: " << phone << endl;
}

