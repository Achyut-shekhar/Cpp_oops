// Program-2
// Create a base class called Shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called Triangle and Rectangle from the base Shape. Add a member function get_data() to the base class to initialize base class data members and another member function displayArea() to compute and display the area of figures. Make displayArea() as a virtual function and redefine this function in the derived classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a triangle or rectangle interactively and display area. Using the constructor also.

#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
  double dimension1, dimension2;

public:
  // Default constructor
  Shape() : dimension1(0), dimension2(0) {}

  // Parameterized constructor
  Shape(double d1, double d2) : dimension1(d1), dimension2(d2) {}

  // Function to input dimensions
  void get_data()
  {
    cout << "Enter first dimension: ";
    cin >> dimension1;
    cout << "Enter second dimension: ";
    cin >> dimension2;
  }

  // Virtual function to display area
  virtual void displayArea() const = 0; // Pure virtual function

  virtual ~Shape() {} // Virtual destructor
};

// Derived class for Triangle
class Triangle : public Shape
{
public:
  // Default constructor
  Triangle() : Shape() {}

  // Parameterized constructor
  Triangle(double base, double height) : Shape(base, height) {}

  void displayArea() const override
  {
    double area = 0.5 * dimension1 * dimension2;
    cout << "Area of Triangle: " << area << " square units\n";
  }
};

// Derived class for Rectangle
class Rectangle : public Shape
{
public:
  // Default constructor
  Rectangle() : Shape() {}

  // Parameterized constructor
  Rectangle(double length, double width) : Shape(length, width) {}

  void displayArea() const override
  {
    double area = dimension1 * dimension2;
    cout << "Area of Rectangle: " << area << " square units\n";
  }
};

// Main function
int main()
{
  Shape *shapePtr = nullptr;
  int choice;

  cout << "Select a shape:\n";
  cout << "1. Triangle\n";
  cout << "2. Rectangle\n";
  cout << "Enter your choice (1 or 2): ";
  cin >> choice;

  if (choice == 1)
  {
    shapePtr = new Triangle();
    cout << "Enter dimensions for Triangle (base and height):\n";
  }
  else if (choice == 2)
  {
    shapePtr = new Rectangle();
    cout << "Enter dimensions for Rectangle (length and width):\n";
  }
  else
  {
    cout << "Invalid choice.\n";
    return 1;
  }

  shapePtr->get_data();
  shapePtr->displayArea();

  // Clean up
  delete shapePtr;

  return 0;
}
