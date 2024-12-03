#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream out;
  out.open("sample.txt");
  out << "this is me\n";
  out << "also me";
  out.close();

  ifstream in;
  in.open("sample.txt");
  string st1, st2;
  // in >> st1 >> st2;
  // cout << st1 << st2;
  while (in.eof() == 0)
  {
    getline(in, st1);
    cout << st1 << endl;
  }
  in.close();
}