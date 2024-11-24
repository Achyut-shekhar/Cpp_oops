#include <bits/stdc++.h>
using namespace std;

class cal_area
{
public:
  int r, h;
  void getdata(int x, int y)
  {
    r = x;
    h = y;
  }

  virtual void display(int r, int h)
  {
    cout << "not the shape" << endl;
  }
};

class cone : public cal_area
{
public:
  void display(int r, int h) override
  {
    double area = 0.3 * 3.14 * r * r * h;
    cout << "cone area is " << area << endl;
  }
};

class hemisphere : public cal_area
{
public:
  void display(int r, int h) override
  {
    double area = 0.6 * 3.14 * r * r * r;
    cout << "hemisphere area is " << area << endl;
  }
};

class cylinder : public cal_area
{
public:
  void display(int r, int h) override
  {
    double area = 3.14 * r * r * h;
    cout << "cylinder area is " << area << endl;
  }
};

int main()
{
  cal_area *c;
  double a, b;
  int choice;

  cout << "select 1-cone 2-hemisphere 3-cylinder" << endl;
  cin >> choice;

  if (choice == 1)
    c = new cone;
  else if (choice == 2)
    c = new hemisphere;
  else
    c = new cylinder;

  cout << "input r and h" << endl;
  cin >> a >> b;

  c->display(a, b);
}