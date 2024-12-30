#include <bits/stdc++.h>
using namespace std;

class operation
{
public:
  int value;
  operation(int v) { value = v; }
  friend bool operator>(operation &num1, operation &num2);
};

bool operator>(operation &num1, operation &num2)
{
  return num1.value > num2.value;
}

int main()
{
  operation num1(10);
  operation num2(20);

  if (num1 > num2)
  {
    cout << "num1 is greater than num2" << endl;
  }
  else
  {
    cout << "num2 is greater than num1" << endl;
  }
}