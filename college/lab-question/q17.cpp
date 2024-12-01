#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateData; // Private data member
protected:
    int protectedData; // Protected data member
public:
    int publicData; // Public data member

    // Constructor to initialize the data members
    Base() : privateData(10), protectedData(20), publicData(30) {}

    // Member function to access private data
    int getPrivateData() const {
        return privateData;
    }

    // Member function to display all data
    void displayBaseData() const {
        cout << "Private Data: " << privateData << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

// Derived class in public mode
class DerivedPublic : public Base {
public:
    void display() {
        // cout << privateData; // Not accessible
        cout << "Protected Data (DerivedPublic): " << protectedData << endl;
        cout << "Public Data (DerivedPublic): " << publicData << endl;
    }
};

// Derived class in protected mode
class DerivedProtected : protected Base {
public:
    void display() {
        // cout << privateData; // Not accessible
        cout << "Protected Data (DerivedProtected): " << protectedData << endl;
        cout << "Public Data (DerivedProtected): " << publicData << endl;
    }
};

// Derived class in private mode
class DerivedPrivate : private Base {
public:
    void display() {
        // cout << privateData; // Not accessible
        cout << "Protected Data (DerivedPrivate): " << protectedData << endl;
        cout << "Public Data (DerivedPrivate): " << publicData << endl;
    }
};

int main() {
    DerivedPublic dp;
    dp.display();
    // dp.protectedData; // Not accessible
    // dp.publicData;    // Accessible

    DerivedProtected dprot;
    dprot.display();
    // dprot.protectedData; // Not accessible
    // dprot.publicData;    // Not accessible

    DerivedPrivate dpriv;
    dpriv.display();
    // dpriv.protectedData; // Not accessible
    // dpriv.publicData;    // Not accessible

    return 0;
}
