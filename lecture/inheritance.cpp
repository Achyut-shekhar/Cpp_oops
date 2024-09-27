#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  int height;
  int weight;
  int age;

  int getAge()
  {
    return this->age;
  }
  void setweight(int w = 0)
  {
    this->weight = w;
  }
};
class male : public human
{
public:
  string color;

  void sleep()
  {
    cout << "male sleeping" << endl;
  }
};

int main()
{
  male obj;
  cout << obj.age << endl;
  cout << obj.weight << endl;
  cout << obj.height << endl;
  cout << obj.color << endl;
  obj.sleep();
  // obj.setweight(84);
  cout << obj.weight << endl;

  return 0;
}