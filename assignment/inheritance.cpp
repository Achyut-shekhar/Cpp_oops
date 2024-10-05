#include <bits/stdc++.h>
using namespace std;

class student
{
private:
  string name;
  int roll;

public:
  void setinfo(string name, int roll)
  {
    this->name = name;
    this->roll = roll;
  }
  void showinfo()
  {
    cout << "\nthe name is " << name << endl;
    cout << "\nthe rool number is" << roll << endl;
  }
};

class marks : public student
{
public:
  int m1, m2, m3, m4, m5;

public:
  void setmarks(int m1, int m2, int m3, int m4, int m5)
  {
    this->m1 = m1;
    this->m2 = m2;
    this->m3 = m3;
    this->m4 = m4;
    this->m5 = m5;
  }
};

class result : public marks
{
private:
  int total;
  int sportmarks;

public:
  void setsport(int marks)
  {
    sportmarks = marks;
  }
  void gettotal()
  {
    total = m1 + m2 + m3 + m4 + m5 + sportmarks;
  }
  void showall()
  {
    showinfo();
    gettotal();
    cout << "\ntotal " << total;
  }
};
int main()
{
  result obj;
  obj.setinfo("achyut", 23);
  obj.setmarks(1, 1, 1, 1, 1);
  obj.setsport(1);
  obj.showall();
}