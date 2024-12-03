#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> ar = {11, 22, 3, 44, 55};

  // declaring
  vector<int>::iterator ptr = ar.begin();

  // displaying vector
  cout << "vector elemnt are:" << endl;
  for (auto itr : ar)
  {
    cout << itr << " ";
  }
  cout << "\n"
       << "another way" << endl;
  for (ptr = ar.begin(); ptr < ar.end(); ptr++)
    cout << *ptr << " ";

  // advance function
  vector<int>::iterator itr = ar.begin();
  cout << "\n"
       << "advance function" << endl;
  advance(itr, 3);
  cout << "the position is: " << *itr;

  // next() and prev()
  cout << "\n"
       << "function next() and prev()" << endl;
  vector<int>::iterator ntr = ar.begin();
  vector<int>::iterator ftr = ar.end();

  auto it = next(ntr, 2);
  auto it1 = prev(ftr, 2);

  cout << "the position by the next is:" << *it << endl;
  cout << "the position by the prev is:" << *it1 << endl;

  // inserter function
  cout << "inserter function" << endl;
  vector<int> arr2 = {10, 20, 30};

  vector<int>::iterator ins = ar.begin();

  advance(ins, 2);

  // copying 1 vector elements in other using inserter()
  copy(arr2.begin(), arr2.end(), inserter(ar, ins));

  cout << "displaying the vector" << endl;
  for (auto dis : ar)
    cout << dis << " ";
  return 0;
}