#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> map1;

  map1.insert(make_pair("one", 1));
  map1.insert(pair<string, int>("two", 2));
  map1.insert({"three", 3});

  // display
  cout << "map after insertion " << endl;
  for (auto pair : map1)
  {
    cout << pair.first << " " << pair.second << endl;
  }

  // emplacing key-value
  map1.emplace("four", 4);
  map1.emplace("five", 5);

  auto it = map1.find("three");
  if (it != map1.end())
    cout << "found the key :" << it->second << endl;
  else
    cout << "key not found" << endl;

  // erasing the element
  map1.erase("two");

  // display
  cout << "\n"
       << "display" << endl;
  for (auto it : map1)
  {
    cout << it.first << " " << it.second << endl;
  }

  cout << "\n"
       << "valur of the fourth key " << map1["four"] << endl;

  // checking the size
  cout << "\n"
       << "the size of the map: " << map1.size() << endl;
  cout << "\n"
       << "is the map empty " << (map1.empty() ? "yes" : "no") << endl;

  // Accessing elements with at (throws an exception if the key is not found)
  try
  {
    int value = map1.at("Five");
    cout << "Value for key 'Five': " << value << endl;
  }
  catch (const out_of_range &e)
  {
    cerr << "Key 'Five' not found. Exception: " << e.what() << endl;
  }

  // Swapping contents with another map
  map<string, int> anotherMap = {{"Six", 6}, {"Seven", 7}};
  cout << "Contents of anotherMap before swap:" << endl;
  for (const auto &pair : anotherMap)
  {
    cout << pair.first << ": " << pair.second << endl;
  }

  map1.swap(anotherMap);

  cout << "Contents of myMap after swap:" << endl;
  for (auto pair : map1)
  {
    cout << pair.first << ": " << pair.second << endl;
  }

  cout << "Contents of anotherMap after swap:" << endl;
  for (auto pair : anotherMap)
  {
    cout << pair.first << ": " << pair.second << endl;
  }

  return 0;
}