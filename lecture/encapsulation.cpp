#include <bits/stdc++.h>
using namespace std;

class student
{//this is hiding of data/encapsulation
  string name;
  int age;
  int height;

public:
  student()
  {
    this->age = 20;
  }
  int getdetails()
  {
    return this->age;
  }
};
int main()
{
  class student obj;
  int age = obj.getdetails();
  cout << "age is " << age << endl;
}