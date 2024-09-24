#include <bits/stdc++.h>
using namespace std;

class library
{
  int codes;
  string author;
  string location;
  int shelves;

public:
  library(int codes, string author, string location, int shelves)
  {
    this->codes = codes;
    this->author = author;
    this->location = location;
    this->shelves = shelves;
  }
  friend void accessLibrary(library &obj);
};

class librarian
{
  void accessLibrary(library &obj);
};
void accessLibrary(library &obj)
{
  cout << obj.codes << endl;
  cout << obj.author << endl;
  cout << obj.location << endl;
  cout << obj.shelves << endl;
}
int main()
{
  library obj(213, "achyut", "dehradun", 1);
  accessLibrary(obj);
}