#include <bits/stdc++.h>
using namespace std;

void display(list<int> &ref)
{
  int it;
  for (auto it : ref)
  {
    cout << it << " ";
  }
  cout << "\n"
       << endl;
}
int main()
{
  list<int> list1;
  list<int> list2(3); // size of the list is 5

  for (auto i = 0; i < 3; i++)
  {
    list1.push_back(rand() / 100);
  }
  list<int>::iterator it;

  for (it = list2.begin(); it != list2.end(); ++it)
  {
    *it = rand() / 100;
  }

  cout << "list 1 element" << endl;
  display(list1);
  cout << "list 2 element" << endl;
  display(list2);

  list1.push_front(100);
  list1.push_back(200);

  cout << "list 1 element after adding" << endl;
  display(list1);

  // removing an element at the front
  list2.pop_front();
  cout << "list 2 element after removing" << endl;
  display(list2);

  // creating 2 new list
  list<int> la, lb;
  la = list1;
  lb = list2;

  // merging the two list2 and list1;
  list1.merge(list2);
  cout << "merged unsorted list n";
  display(list1);

  // sorting and merging
  la.sort();
  lb.sort();
  la.merge(lb);

  cout << "merged sorted list" << endl;
  display(la);

  // reversing the list
  la.reverse();
  cout << "reversed merged list";
  display(la);

  return 0;
}