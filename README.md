# Hotel-Management-System
A C++ application designed to manage hotel reservations using core Object-Oriented Programming (OOP) principles.

Core Features:

    Customer Categorization: Supports both Regular and VIP customer types with specific data fields.

    Room Management: Includes functionality to check room availability and perform check-outs.

    Dynamic Polymorphism: Utilizes a base class CustomerBase with virtual functions to handle different customer types through a single interface.

    Data Persistence: Features a system to save current room bookings to a local text file located in the database/ directory.

Technical Implementation:

    Inheritance: RegularCustomer and VipCustomer inherit from CustomerBase.

    Encapsulation: Data members like name, roomNumber, and phone are protected to ensure controlled access.

    Function Overloading: The Hotel class implements overloaded bookRoom methods for flexible booking options.

    Memory Management: Includes proper destructors to clean up dynamically allocated customer objects in the std::vector.

How to Compile and Run:

    Prerequisites: Ensure you have g++ and make installed on your system.

    Build: Run the command make in the root directory to compile the project using the provided Makefile.

    Execute: Start the program by running ./hotel.

    Cleanup: Use make clean to remove the compiled executable.

File Structure:

    src/: Contains all .cpp and .h implementation and header files.

    database/: Destination folder for the customers.txt output file.

    Makefile: Build configuration for the G++ compiler.
