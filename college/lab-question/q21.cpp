#include <bits/stdc++.h>
using namespace std;

class shape
{
public:
  int x;
  int y;

  void get_data(int a, int b)
  {
    x = a;
    y = b;
  }

  virtual void display(int x, int y)
  {
    cout << "not the right shape" << endl;
  }
};

class rectangle : public shape
{
public:
  void display(int x, int y) override
  {
    double area = x * y;
    cout << "rectangle area is " << area << endl;
  }
};

class triangle : public shape
{
public:
  void display(int x, int y) override
  {
    double area = 0.5 * x * y;
    cout << "triangle area is " << area << endl;
  }
};

int main()
{
  shape *s;
  double a, b;
  int choice;

  cout << "select 1-triangle  2-rectangle" << endl;
  cin >> choice;

  if (choice == 1)
    s = new triangle;
  else
    s = new rectangle;

  cout << "input a and b" << endl;
  cin >> a >> b;

  s->display(a, b);
}