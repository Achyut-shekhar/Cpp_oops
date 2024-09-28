#include <bits/stdc++.h>
using namespace std;

class complexNum
{
public:
  int real;
  int img;

  complexNum operator+(complexNum obj)
  {
    complexNum result;
    result.real = this->real + obj.real;
    result.img = this->img + obj.img;
    return result;
  }
  complexNum operator-(complexNum obj)
  {
    complexNum result;
    result.real = this->real - obj.real;
    result.img = this->img - obj.img;
    return result;
  }

  bool operator==(complexNum obj)
  {
    complexNum result;
    if (this->real == obj.real && this->img == obj.img)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void display()
  {
    cout << real << "+" << img << "i" << endl;
  }
};
int main()
{
  complexNum obj1;
  complexNum obj2;
  bool obj;
  // obj1

  cout << "\n inputh the real part of obj1" << endl;
  cin >> obj1.real;
  cout << "\n inputh the imaginary part of obj1" << endl;
  cin >> obj1.img;
  obj1.display();
  // obj2
  cout << "\n inputh the real part of obj2" << endl;
  cin >> obj2.real;
  cout << "\n inputh the imaginary part of obj2" << endl;
  cin >> obj2.img;
  obj2.display();
  // adding two object
  cout << "\n----adding-------" << endl;
  complexNum obj3 = (obj1 + obj2);
  obj3.display();

  // subtracting two object
  cout << "\n----subtracting-------" << endl;
  obj3 = (obj1 - obj2);
  obj3.display();
  // subtracting two object
  cout << "\n----comparing-------" << endl;
  obj = (obj1 == obj2);
  if (obj == true)
  {
    cout << "same";
  }
  else
    cout << "not same" << endl;
}
