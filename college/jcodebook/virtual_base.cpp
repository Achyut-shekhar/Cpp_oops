#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
  int roll;

public:
  void setNum(int a)
  {
    roll = a;
  }
  void print()
  {
    cout << "your roll no. is " << roll << endl;
  }
};

class test : virtual public student
{
protected:
  float maths, physics;

public:
  void setMar(float m1, float m2)
  {
    maths = m1;
    physics = m2;
  }

  void printMar()
  {
    cout << "your result is here:" << endl
         << "maths: " << maths << " " << " " << "physics: " << physics << endl;
  }
};
class sports : virtual public student
{
protected:
  float score;

public:
  void setScore(float m)
  {
    score = m;
  }

  void printScore()
  {
    cout << "score is: " << score << endl;
  }
};

class result : public test, public sports
{
private:
  float total;

public:
  void display()
  {
    total = maths + physics + score;
    print();
    printMar();
    printScore();

    cout << "total is " << total << endl;
  }
};

int main()
{
  result obj;
  obj.setNum(2);
  obj.setMar(100, 50);
  obj.setScore(100);
  obj.display();

  return 0;
}