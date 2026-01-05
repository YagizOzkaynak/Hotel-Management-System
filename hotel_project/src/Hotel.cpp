#include "Hotel.h"
#include <algorithm>

Hotel::Hotel() {}

Hotel::~Hotel() {
    for (auto c : customers) delete c;
}

bool Hotel::isRoomAvailable(int room) const {
    for (auto c : customers)
        if (c->getRoom() == room) return false;
    return true;
}

void Hotel::bookRoom(CustomerBase* c) {
    if (!isRoomAvailable(c->getRoom())) {
        cout << "Room not available!\n";
        delete c;
        return;
    }
    customers.push_back(c);
    cout << "Room successfully booked!\n";
}

void Hotel::bookRoom(int room, const string& name) {
    if (!isRoomAvailable(room)) {
        cout << "Room already booked!\n";
        return;
    }
    customers.push_back(new RegularCustomer(name, room, "N/A"));
}

void Hotel::displayCustomers() const {
    cout << "\n--- CURRENT CUSTOMERS ---\n";
    for (auto c : customers)
        c->printInfo();
}

void Hotel::checkOut(int room) {
    for (size_t i = 0; i < customers.size(); i++) {
        if (customers[i]->getRoom() == room) {
            delete customers[i];
            customers.erase(customers.begin() + i);
            cout << "Checked out successfully.\n";
            return;
        }
    }
    cout << "Room not found!\n";
}

void Hotel::saveToFile() const {
    ofstream file("database/customers.txt");
    for (auto c : customers) {
        file << c->getRoom() << endl;
    }
    file.close();
}

