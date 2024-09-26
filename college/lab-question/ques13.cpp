#include <bits/stdc++.h>
using namespace std;

class savingAccount
{
  double savingBalance;
  double monthlyInterest;

public:
  static double annualInterestRate;

  savingAccount(int saver)
  {
    savingBalance = saver;
    monthlyInterest = 0.0;
  }
  void monthlyinterest()
  {
    monthlyInterest = (annualInterestRate * savingBalance) / 12;
    savingBalance += monthlyInterest;
  }
  static void modifyInterest(double rate)
  {

    annualInterestRate = rate;
  }

  void display()
  {
    cout << "balance is " << savingBalance << endl;
    cout << "monthly interest is Rs" << monthlyInterest << endl;
  }
};
double savingAccount::annualInterestRate = 0.04;

int main()
{
  savingAccount saver1(2000);
  savingAccount saver2(3000);

  saver1.monthlyinterest();
  saver2.monthlyinterest();

  cout << "\n-----Saver1------" << endl;
  saver1.display();
  cout << "\n-----Saver2------" << endl;
  saver2.display();

  cout << "\n------interest rate is 5-----" << endl;
  savingAccount::modifyInterest(0.05);

  saver1.monthlyinterest();
  cout << "\n-----Saver1------" << endl;
  saver1.display();

  saver2.monthlyinterest();
  cout << "\n-----Saver2------" << endl;
  saver2.display();
}
