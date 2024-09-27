#include <bits/stdc++.h>
using namespace std;

class animal
{
public:
  int age = 20;
  int weight;

public:
  void speak()
  {
    cout << "speaking" << endl;
  }
};

class human
{
public:
  string color;

  void bark()
  {
    cout << "bark" << endl;
  }
};
// multiple inheritance
class hybrid : public animal, public human
{
};

int main()
{
  hybrid h;
  h.speak();
  h.bark();
  cout<<h.age<<endl;

  return 0;
}
