#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    // Demonstrating List
    cout << "List Demonstration:\n";
    list<int> myList = {1, 2, 3, 4, 5};

    // Adding elements
    myList.push_back(6);  // Add at the end
    myList.push_front(0); // Add at the beginning

    // Iterating through the list
    cout << "Elements in the list: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements
    myList.pop_front(); // Remove first element
    myList.pop_back();  // Remove last element

    cout << "After popping front and back: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << "\n\n";

    // Demonstrating Vector
    cout << "Vector Demonstration:\n";
    vector<string> myVector = {"apple", "banana", "cherry"};

    // Adding elements
    myVector.push_back("date"); // Add at the end

    // Accessing elements
    cout << "First element: " << myVector.front() << endl;
    cout << "Last element: " << myVector.back() << endl;

    // Iterating through the vector
    cout << "Elements in the vector: ";
    for (const string &fruit : myVector) {
        cout << fruit << " ";
    }
    cout << endl;

    // Removing the last element
    myVector.pop_back();
    cout << "After popping the last element: ";
    for (const string &fruit : myVector) {
        cout << fruit << " ";
    }
    cout << "\n\n";

    // Demonstrating Map
    cout << "Map Demonstration:\n";
    map<int, string> myMap;

    // Adding key-value pairs
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    // Iterating through the map
    cout << "Elements in the map:\n";
    for (const auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Accessing elements
    cout << "Value at key 2: " << myMap[2] << endl;

    // Erasing an element
    myMap.erase(2);
    cout << "After erasing key 2:\n";
    for (const auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
