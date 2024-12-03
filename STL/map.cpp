#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> map1;

  map1[1] = "one";
  map1[3] = "two";
  map1[2] = "three";

  // accessing the values using keys
  cout << "value for key 2 :" << map1[2] << endl;

  // iterating
  for (auto pair : map1)
  {
    cout << pair.first << " " << pair.second << endl;
  }

  // emplacing key-value pairs
  map1.emplace("four", 4);
  map1.emplace("five", 5);

  // finding element by key
  auto it = map1.find(3);
  if (it != map1.end())
    cout << "found the 'three' " << it->second << endl;
  else
    cout << "key not found" << endl;
}
