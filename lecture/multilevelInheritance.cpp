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

class dog : public animal
{
};
// a inherited class is inherited by other class
class germanShepherd : public dog
{
};

int main()
{

  germanShepherd d;
  d.speak(); // inherited the function from animal
  cout << d.age << endl;
  return 0;
}
