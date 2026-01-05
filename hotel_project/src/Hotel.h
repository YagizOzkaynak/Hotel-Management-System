#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include <fstream>
#include "CustomerBase.h"
#include "RegularCustomer.h"
#include "VipCustomer.h"

class Hotel {
private:
    vector<CustomerBase*> customers;

public:
    Hotel();
    ~Hotel();

    void bookRoom(CustomerBase* c);
    void bookRoom(int room, const string& name); // Overloading
    void displayCustomers() const;
    void checkOut(int room);
    void saveToFile() const;
    bool isRoomAvailable(int room) const;
};

#endif

