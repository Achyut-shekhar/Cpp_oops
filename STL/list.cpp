#include <bits/stdc++.h>
using namespace std;

// push_front(),push_back(),size(),front() and pop_front()

int main()
{
  list<int> lis;

  lis.push_back(30);
  lis.push_back(40);
  lis.push_front(10);
  lis.push_front(20);

  auto size = lis.size();

  for (auto j = 0; j < size; j++)
  {
    cout << lis.front() << " ";
    lis.pop_front();
  }

  // after pop
  cout << "\n"
       << endl;
  cout << "after pop" << endl;

  for (auto j = 0; j < size; j++)
  {
    cout << lis.front() << " ";
  }
  cout << endl;
  return 0;
}