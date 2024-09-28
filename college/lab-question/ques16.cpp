#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {} // Constructor to initialize value

    // Friend function declarations (defined outside the class)
    friend Number operator-(Number obj);        // Unary minus
    friend Number operator++(Number obj);       // Pre-increment
    friend Number operator++(Number obj, int);  // Post-increment (note the second parameter)
    friend Number operator--(Number obj);       // Pre-decrement
    friend Number operator--(Number obj, int);  // Post-decrement (note the second parameter)

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Friend function definitions

// Unary minus (-)
Number operator-(Number obj) {
    Number temp;
    temp.value = -obj.value; // Negate the value
    return temp;             // Return a new object
}

// Pre-increment (++obj)
Number operator++(Number obj) {
    ++obj.value; // Increment the value
    return obj;  // Return the modified copy
}

// Post-increment (obj++)
Number operator++(Number obj, int) { // Second parameter indicates post-increment
    Number temp = obj; // Save the current value
    obj.value++;       // Increment the copy
    return temp;       // Return the original value (the old copy)
}

// Pre-decrement (--obj)
Number operator--(Number obj) {
    --obj.value; // Decrement the value
    return obj;  // Return the modified copy
}

// Post-decrement (obj--)
Number operator--(Number obj, int) { // Second parameter indicates post-decrement
    Number temp = obj; // Save the current value
    obj.value--;       // Decrement the copy
    return temp;       // Return the original value (the old copy)
}

int main() {
    Number obj(5);

    // Unary minus
    cout << "Original value: ";
    obj.display();
    obj = -obj; // Using unary minus
    cout << "After applying unary -: ";
    obj.display();

    // Pre-increment
    obj = ++obj; // Using pre-increment
    cout << "After pre-increment (++obj): ";
    obj.display();

    // Post-increment
    Number oldValue = obj++; // Using post-increment
    cout << "After post-increment (obj++): ";
    obj.display();
    cout << "Value returned by post-increment: ";
    oldValue.display();

    // Pre-decrement
    obj = --obj; // Using pre-decrement
    cout << "After pre-decrement (--obj): ";
    obj.display();

    // Post-decrement
    oldValue = obj--; // Using post-decrement
    cout << "After post-decrement (obj--): ";
    obj.display();
    cout << "Value returned by post-decrement: ";
    oldValue.display();

    return 0;
}
