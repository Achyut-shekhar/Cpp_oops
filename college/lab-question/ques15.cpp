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
  }
  operatorNum operator++(int)
  {

    real++; // Increment the real value
  }
  operatorNum operator--()
  {
    --real;
  }
  operatorNum operator--(int)
  {

    real--;
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
