#include <iostream>

using namespace std;

class Student
{
  int scores[5];

public:
  void input()
  {
    cout << "Input marks for the student: ";
    for (int i = 0; i < 5; ++i)
    {
      cin >> scores[i];
    }
  }

  int calculateTotalScore() const
  {
    int total = 0;
    for (int i = 0; i < 5; ++i)
    {
      total += scores[i];
    }
    return total;
  }
};

int main()
{
  int n;
  cout << "Input number of students: ";
  cin >> n;

  Student anna;
  cout << "Input Anna's marks: ";
  anna.input();

  int annaTotalScore = anna.calculateTotalScore();

  int higherCount = 0;

  cout << "Input marks for the other students:" << endl;
  for (int i = 0; i < n; ++i)
  {
    Student currentStudent;
    currentStudent.input();
    if (currentStudent.calculateTotalScore() > annaTotalScore)
    {
      ++higherCount;
    }
  }

  cout << "Number of students who scored higher than Anna: " << higherCount << endl;

  return 0;
}