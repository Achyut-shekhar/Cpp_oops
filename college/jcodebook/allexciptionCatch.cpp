#include <bits/stdc++.h>
using namespace std;

void multi(int x)
{
  try
  {
    if (x == 1)
      throw x;
    else if (x == 0)
      throw 'x';
    else if (x == -1)
      throw 1.0;
    cout << "end of the block" << endl;
  }
  catch (...)
  {
    cout << "exception caught" << endl;
  }

  cout << "end of the function" << endl;
}

int main()
{
  multi(1);
  multi(0);
  multi(-1);
  // multi(10);
}