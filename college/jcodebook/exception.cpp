// division by zero
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cout << "enter the number" << endl;
  cin >> a >> b;
  try
  {
    if (b == 0)
      throw b;
    else
      cout << "result is " << a / b << endl;
  }
  catch (int x)
  {
    cout << "error" << x << endl;
  }
  cout << "end" << endl;
}