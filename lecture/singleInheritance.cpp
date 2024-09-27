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

int main()
{

  dog d;
  d.speak(); // inherited the function from animal
  cout << d.age << endl;
  return 0;
}
