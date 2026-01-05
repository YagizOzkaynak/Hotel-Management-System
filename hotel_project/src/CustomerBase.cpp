#include "CustomerBase.h"

CustomerBase::CustomerBase(const string& name, int room, const string& phone)
    : name(name), roomNumber(room), phone(phone) {}

CustomerBase::~CustomerBase() {}

int CustomerBase::getRoom() const {
    return roomNumber;
}

