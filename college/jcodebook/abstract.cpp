#include <bits/stdc++.h>
using namespace std;

// abstract class animal
class animal
{
public:
  // pure virtual
  virtual void makeSound() = 0;
};

// derived class dog
class dog : public animal
{
public:
  // implementing the pure virtual function
  void makeSound() override
  {
    cout << "woof" << endl;
  }
};

// derived class cat
class cat : public animal
{
public:
  void makeSound() override
  {
    cout << "meow" << endl;
  }
};

int main()
{
  animal *a = new dog;
  animal *b = new cat;

  a->makeSound();
  b->makeSound();
}