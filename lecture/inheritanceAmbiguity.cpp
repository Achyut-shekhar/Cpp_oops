#include <bits/stdc++.h>
using namespace std;

class a
{
public:
  void func()
  {
    cout << " i am a" << endl;
  }
};
class b
{
public:
  void func()
  {
    cout << " i am b" << endl;
  }
};

class c : public a, public b
{
};

int main()
{
  c obj;
  // obj.func(); // in this we will get error as there are 2 same name function in inherited class

  obj.a::func();
  obj.b::func();
  return 0;
}