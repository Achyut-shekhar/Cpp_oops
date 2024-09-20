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
};
int main()
{
  Time time1(1, 20, 35);
}