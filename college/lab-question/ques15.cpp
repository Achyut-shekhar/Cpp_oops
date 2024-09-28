#include <bits/stdc++.h>
using namespace std;

class operatorNum
{
public:
  int real;
  // comstructor
  operatorNum() : real(0) {}

  operatorNum operator++()
  {
    ++real;
    return *this;
  }
  operatorNum operator++(int)
  {
    operatorNum temp = *this; // Save the current state
    real++;                   // Increment the real value
    return temp;              // Return the previous state
  }
  operatorNum operator--()
  {
    --real;
    return *this;
  }
  operatorNum operator--(int)
  {
    operatorNum temp = *this; 
    real--;                  
    return temp;
  }
  void display()
  {
    cout << "Real value: " << real << endl;
  }
};
int main()
{
  operatorNum obj;

  // Pre-increment
  cout << "Before pre-increment: ";
  obj.display();
  ++obj;
  cout << "After pre-increment: ";
  obj.display();

  // Post-increment
  cout << "Before post-increment: ";
  obj.display();
  obj++;
  cout << "After post-increment: ";
  obj.display();

  // Pre-dicrement
  cout << "Before pre-increment: ";
  obj.display();
  --obj;
  cout << "After pre-increment: ";
  obj.display();

  // Post-dicrement
  cout << "Before post-increment: ";
  obj.display();
  obj--;
  cout << "After post-increment: ";
  obj.display();
}
