#include <iostream>
#include "Hotel.h"
using namespace std;

int main() {
    Hotel hotel;
    int choice;

    while (true) {
        cout << "\n===== HOTEL MANAGEMENT SYSTEM =====\n";
        cout << "1. Book Regular Customer\n";
        cout << "2. Book VIP Customer\n";
        cout << "3. Display Customers\n";
        cout << "4. Check Out\n";
        cout << "5. Save to File\n";
        cout << "6. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, phone;
            int room;
            cin.ignore();
            cout << "Name: "; getline(cin, name);
            cout << "Phone: "; getline(cin, phone);
            cout << "Room: "; cin >> room;
            hotel.bookRoom(new RegularCustomer(name, room, phone));

        } else if (choice == 2) {
            string name, phone;
            int room, lvl;
            cin.ignore();
            cout << "Name: "; getline(cin, name);
            cout << "Phone: "; getline(cin, phone);
            cout << "Room: "; cin >> room;
            cout << "VIP Level: "; cin >> lvl;
            hotel.bookRoom(new VipCustomer(name, room, phone, lvl));

        } else if (choice == 3) {
            hotel.displayCustomers();

        } else if (choice == 4) {
            int room;
            cout << "Room to checkout: ";
            cin >> room;
            hotel.checkOut(room);

        } else if (choice == 5) {
            hotel.saveToFile();

        } else if (choice == 6) {
            return 0;

        } else cout << "Invalid choice!\n";
    }
}

