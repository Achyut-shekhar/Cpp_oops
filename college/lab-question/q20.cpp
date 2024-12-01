#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle(const string& type) : vehicleType(type) {
        cout << "Vehicle created: " << vehicleType << endl;
    }
    void describe() {
        cout << "This is a " << vehicleType << "." << endl;
    }
protected:
    string vehicleType;
};

// Derived class 1
class Car : virtual public Vehicle {
public:
    Car() : Vehicle("Car") {
        cout << "Car created." << endl;
    }
    void drive() {
        cout << "Driving the car." << endl;
    }
};

// Derived class 2
class Boat : virtual public Vehicle {
public:
    Boat() : Vehicle("Boat") {
        cout << "Boat created." << endl;
    }
    void sail() {
        cout << "Sailing the boat." << endl;
    }
};

// Derived class that solves the Diamond Problem
class AmphibiousVehicle : public Car, public Boat {
public:
    AmphibiousVehicle() : Vehicle("Amphibious Vehicle"), Car(), Boat() {
        cout << "Amphibious Vehicle created." << endl;
    }
    void describe() {
        cout << "This is an amphibious vehicle." << endl;
    }
};

int main() {
    AmphibiousVehicle av;
    av.describe();
    av.drive();
    av.sail();

    // Access the common base class method
    av.Vehicle::describe();

    return 0;
}
