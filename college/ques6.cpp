#include <bits/stdc++.h>
using namespace std;

class hotel
{
  int rno;
  string name;
  double tariff;
  int NOD;

public:
  double CALC()
  {
    double amount;
    amount = ((tariff * NOD) > 10000) ? 1.05 * NOD * tariff : NOD * tariff;
    return amount;
  }

  void checkin(int rno, string name, double tariff, int nod)
  {
    this->rno = rno;
    this->name = name;
    this->tariff = tariff;
    NOD = nod;
  }

  void checkout()
  {
    cout << "\ncheckout details:-\n";
    cout << "\nRoom no. " << rno << "\nCustomer Name: " << name << "\nper day charges: " << tariff << "\nNumber if days of stay: " << NOD << endl;
    cout << "\ntotal amount: " << CALC() << endl;
  }
};

int main()
{
  hotel obj;
  int nod, rno;
  double tariff;
  string name;
  cout << "\nenter the details:-\n\nRoom number: ";
  cin >> rno;
  cin.ignore();
  cout << "\nCustomer Name: \n";
  getline(cin, name);
  cout << "\nper day charge\n";
  cin >> tariff;
  cout << "\nnumber of days of stay:\n";
  cin >> nod;
  obj.checkin(rno, name, tariff, nod);
  obj.checkout();
  return 0;
}