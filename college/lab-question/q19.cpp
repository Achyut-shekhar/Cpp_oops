#include <bits/stdc++.h>
using namespace std;

class student
{
public:
  int age, enroll_no, marks;
  string name;

  student(int age, int enroll, int marks, string name)
  {
    this->age = age;
    this->enroll_no = enroll;
    this->marks = marks;
    this->name = name;
  }

  virtual void display()
  {
    cout << "age is " << age << endl;
    cout << "name is " << name << endl;
    cout << "enroll_no is " << enroll_no << endl;
    cout << "marks is " << marks << endl;
  }
};

class faculty
{
public:
  string faculty_name;
  int faculty_code, age, experience;
  float salary;
  string deptt, gender;

  faculty(string name, int code, int fage, int exp, float sal, string dept, string gen) : faculty_name(name), faculty_code(code), age(fage), experience(exp), salary(sal), deptt(dept), gender(gen) {}

  virtual void display()
  {
    cout << "age is " << age << endl;
    cout << "faculty_name is " << faculty_name << endl;
    cout << "deptt is " << deptt << endl;
    cout << "faculty_code is " << faculty_code << endl;
    cout << "experience is " << experience << endl;
    cout << "salary is " << salary << endl;
    cout << "experience is " << experience << endl;
  }
};

class person : public student, public faculty
{
public:
  person(int sage, int enroll, int marks, string sname,
         string fname, int code, int fage, int exp, float sal, string dept, string gen) : student(sage, enroll, marks, sname), faculty(fname, code, fage, exp, sal, dept, gen) {}

  void display() override
  {
    student::display();
    cout << endl;
    faculty::display();
  }
};

int main()
{
  person p(18, 21224, 100, "achyut", "shekhar", 1111, 89, 23, 10000, "cse", "male");

  p.display();

  return 0;
}
