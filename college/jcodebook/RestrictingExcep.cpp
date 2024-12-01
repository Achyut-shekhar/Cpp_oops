#include <bits/stdc++.h>
using namespace std;

void res(int test) throw(int, char, double)
{
  if (test == 0)
    throw test;
  if (test == 1)
    throw 'a';
  if (test == 2)
    throw 123.23;
}
int main()
{
  try
  {
    res(0);
    res(1);
    res(2);
  }
  catch (int i)
  {
    cout << "caught an integer " << i << endl;
  }
  catch (char c)
  {
    cout << "caught an char" << c << endl;
  }
  catch (double d)
  {
    cout << "caught double";
  }

  cout << "ending";
}