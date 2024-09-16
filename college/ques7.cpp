#include <bits/stdc++.h>
using namespace std;

class bank
{
  string name;
  int accountNum;
  string accountType;
  double balance;

public:
  void createAccount(string name, int accountNum, string accounType, double balance)
  {
    this->name = name;
    this->accountNum = accountNum;
    this->accountType = accountType;
    this->balance = balance;
  }

  void display()
  {
    cout << "\ndetails are\n";
    cout << "name: " << name << "\naccount number: " << accountNum << "\naccount type: " << accountType << "\nbalance: " << balance << endl;
  }

  void deposit(double depositAmount)
  {
    balance += depositAmount;
    cout << "\ntotal amount is " << balance << endl;
  }
  void withdraw(double withdrawAmount)
  {
      balance-=withdrawAmount;
      cout<<"\ntotal amount is "<<balance<<endl;
  }
};
int main()
{
  bank account;

  string name, accounType;
  int accountNum;
  double balance;

  cout << "\nenter name:\n";
  getline(cin, name);

  cout << "\nenter account number\n";
  cin >> accountNum;
  cin.ignore();

  cout << "enter the account type:";
  getline(cin, accounType);

  cout << "\nenter balance\n";
  cin >> balance;

  account.createAccount(name, accountNum, accounType, balance);
  // display
  account.display();

  // deposit
  double depositAmount;
  cout << "\nenter the amount to deposit";
  cin >> depositAmount;
  account.deposit(depositAmount);

  //withdraw
  double withdrawAmount;
  cout<<"\nenter the withdraw amount"<<endl;
  cin>>withdrawAmount;
  account.withdraw(withdrawAmount);
}