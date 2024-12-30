#include <iostream>
using namespace std;

class Number
{
private:
  int value;

public:
  Number(int val) : value(val) {}

  // Declare the friend function for overloading
  // the unary minus operator (-)
  friend Number operator-(Number &num);

  // Display the value
  void display()
  {
    cout << "Value: " << value << endl;
  }
};

// Overload the unary minus operator (-)
// using a friend function
Number operator-(Number &num)
{
  return Number(-num.value);
}

int main()
{
  Number num1(10);

  // Use the overloaded unary minus operator to negate num1
  Number negated = -num1;

  cout << "Original number:" << endl;
  num1.display();

  cout << "Negated number:" << endl;
  negated.display();

  return 0;
}