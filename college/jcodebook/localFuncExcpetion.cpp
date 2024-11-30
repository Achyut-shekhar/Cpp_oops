#include <bits/stdc++.h>
using namespace std;

void ex(int t)
{
  try
  {
    if (!t)
      throw t;
    else
      cout << t << endl;
  }
  catch (int i)
  {
    cout << "error " << i << endl;
  }
}

int main()
{
  cout << "starting" << endl;
  ex(1);
  ex(0);
  ex(2);
  ex(4);
  ex(5);
  return 0;
}