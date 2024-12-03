#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string st = "achyut";
  string st1;
  // opening file using constructor
  // ofstream out("sample.txt");
  // out << st;

  // reading the file
  ifstream in("sample.txt");
  // in >> st1;
  getline(in, st1); //gives the one line
  cout << st1;
}