// You are given three classes A, B and C. All three classes implement their own
// version of func. In class A, func multiplies the value passed as a parameter by 2. In
// class B, func multiplies the value passed as a parameter by 3. In class C, func
// multiplies the value passed as a parameter by 5.You are given class D such that You
// need to modify the class D and implement the function update_val which sets D's
// val to new_val by manipulating the value by only calling the func defined in classes
// A, B and C.It is guaranteed that new_val has only 2, 3 and 5 as its prime factors.
// Implement class D's function update_val. This function should update D's val only
// by calling A, B and C's func.

// Sample Input
// new_val = 30
// Sample Output
// A's func called 1 times
// B's func called 1 times
// C's func called 1 times

#include <bits/stdc++.h>
using namespace std;

class a
{
public:
  int mul2(int val)
  {
    val = val * 2;
    return val;
  }
};
class b : public a
{
public:
  int mul3(int val)
  {
  }
};
class c : public b
{
public:
  int mul5(int val)
  {
  }
};
class d : public c
{
public:
  int value = 1;
  int count2 = 0, count3 = 0, count5 = 0;
  int update_val(int val)
  {
    while (value == val)
    {
      if (val % 2 == 0)
      {
        value = mul2(value);
        count2++;
      }
      if (val % 3 == 0)
      {
        value = mul3(value);
        count3++;
      }
      if (val % 5 == 0)
      {
        value = mul5(value);
        count5++;
      }
    }
  }
};
int main()
{
  d obj;
  obj.value = 15;
  obj.update_val(obj.value);
  cout << obj.count2 << " " << obj.count3 << " " << obj.count5 << endl;
}