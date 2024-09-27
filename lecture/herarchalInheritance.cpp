#include <bits/stdc++.h>
using namespace std;

class a
{
public:
  void fun1()
  {
    cout << "inside function 1" << endl;
  }
};

class b : public a
{
public:
  void fun2()
  {
    cout << "inside function 2" << endl;
  }
};
class c : public a
{
public:
  void fun3()
  {
    cout << "inside function 3" << endl;
  }
};
int main()
{
  a obj;
  obj.fun1();

  b obj1;
  obj1.fun1();
  obj1.fun2();

  c obj2;
  obj2.fun1();
  obj2.fun3();
  return 0;
}
