#include <bits/stdc++.h>
using namespace std;

class Time
{
public:
  int minutes;
  int hour;
  int seconds;

  Time()
  {
    minutes = 0;
    hour = 0;
    seconds = 0;
  }
  Time(int hour, int minutes, int seconds)
  {
    this->hour = hour;
    this->minutes = minutes;
    this->seconds = seconds;
  }
  void normalize()
  {
    if (seconds >= 60)
    {
      minutes += seconds / 60;
      seconds %= 60;
    }
    if (minutes >= 60)
    {
      hour += minutes / 60;
      minutes %= 60;
    }
  }
  Time addtime(Time &t1, Time &t2)
  {
    Time result;
    result.hour = t1.hour + t2.hour;
    result.minutes = t1.minutes + t2.minutes;
    result.seconds = t1.seconds + t2.seconds;
    result.normalize();
    return result;
  }
  void display()
  {
    cout << "hours: " << hour << "\tminutes: " << minutes << "\tseconds: " << seconds << endl;
  }
};
int main()
{
  Time time1(1, 20, 35);
  Time time2(1, 45, 50);

  Time time3;
  time3 = time3.addtime(time1, time2);

  time3.display();
}