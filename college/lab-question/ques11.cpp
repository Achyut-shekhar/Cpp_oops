#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class tollbooth
{
public:
  int numCars;
  double totalMoney;
  int payCar = 0;
  int noncar = 0;
  tollbooth()
  {
    numCars = 0;
    totalMoney = 0;
  }

  void payingCar()
  {

    numCars++;
    totalMoney += 0.5;
    payCar++;
  }
  void nonCar()
  {
    numCars++;
    noncar++;
  }
  void display()
  {
    cout << "\ntotal cars " << numCars << endl;
    cout << "\ntotal money " << totalMoney << endl;
  }
  void displaypay()
  {
    cout << "\npayed car are " << payCar << endl;
  }
  void displaynon()
  {
    cout << "\nnon-payed car are " << noncar << endl;
  }
};

int main()
{
  tollbooth booth;
  char choice;
  do
  {
    cout << "-----inputs------" << endl;
    cout << "\n1-paying car\n2-non paying car\n3-diplay payed car\n4-display non payed car" << endl;
    choice = _getch();
    if (choice == 27)
    {
      booth.display();
      exit(0);
    }
    switch (choice)
    {
    case '1':
      booth.payingCar();
      cout << "\npaying car counted" << endl;
      break;
    case '2':
      booth.nonCar();
      cout << "\nnon paying car counted" << endl;
      break;
    case '3':
      booth.displaypay();
      break;
    case '4':
      booth.displaynon();
      break;
    }
  } while (true);
}