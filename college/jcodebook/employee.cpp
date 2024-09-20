#include<bits/stdc++.h>
using namespace std;

class employee{
    public:
      string name,designation;
      int id;
      int monthlySalary;
      int annualSalary;

      void registerInput(string name,string designation,int id,int salary)
      {
        this->name=name;
        this->designation=designation;
        this->id=id;
        this->monthlySalary=salary;
        this->annualSalary=salary;
      }

      void display()
      {
        cout<<"\nname: "<<name<<"\tdesignation: "<<designation<<"\tid: "<<id<<"\tsalary: "<<monthlySalary<<"annual salary: "<<annualSalary<<endl;
      }

      void setAnnual()
      {
        annualSalary=12*monthlySalary;
      }
      void salBonus(float bonus)
      {
        monthlySalary=monthlySalary+(monthlySalary*bonus);
        annualSalary=12*monthlySalary;
      }
     
};
int main()
{
    int n,i;
    cout<<"input the number pf book records you want to store"<<endl;
    employee emp[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        string name,designation;
        int id;int monthlySalary;
        cout<<"input the name of the employee"<<endl;
        cin>>name;
        cout<<"input the designation of the employee"<<endl;
        cin>>designation;
        cout<<"input the id"<<endl;
        cin>>id;
        cout<<"input the salary"<<endl;
        cin>>monthlySalary;

        emp[i].registerInput(name,designation,id,monthlySalary);
    }

    //initial display
    cout<<"\n\nregistered books"<<endl;
    for(i=0;i<n;i++)
    {
        emp[i].display();
    }

    cout<<"annual salary"<<endl;
    for(i=0;i<n;i++)
    {
        emp[i].setAnnual();
    }
   
    //annual salary
    cout<<"\n\nupdate details"<<endl;
    for(i=0;i<n;i++)
    {
        emp[i].display();
    }
   
   //apply bonus
float bonus;
   cout<<"input the percentage of bonus"<<endl;
   cin>>bonus;
   bonus=bonus/100;
   for(i=0;i<n;i++)
   {
    emp[i].salBonus(bonus);
   }

   //updated details
   cout<<"updated details"<<endl;
   for(i=0;i<n;i++)
    {
        emp[i].display();
    }


}