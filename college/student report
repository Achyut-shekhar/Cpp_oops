#include<bits/stdc++.h>
using namespace std;

class student{
    public:
  string name;
  int roll;
  float marks;
  int sub1;
  int sub2;
  int sub3;
  
  void input(string name,int roll,float marks,int sub1,int sub2,int sub3){
      this->name=name;
      this->roll=roll;
      this->marks=marks;
      this->sub1=sub1;
      this->sub2=sub2;
      this->sub3=sub3;
  }
  
  void display(){
      cout<<"\nname is "<<name<<"\nroll number:"<<roll<<"\nmarks is"<<marks<<"\nsubject 1:"<<sub1<<"\nsubject 2:"<<sub2<<"\nsubject 3:"<<sub3<<endl;
  }
  string getname()
  {
      return name;
  }
  
  float getmarks()
  {
      return marks;
  }
  
};
int main()
{
    int n,i;
    float per;
    student report[100];
    cout<<"input the number of students"<<endl;
    cin>>n;
    cout<<"input the details"<<endl;
    for(i=0;i<n;i++)
    {
        string name;
        int roll,sub1,sub2,sub3;
        float marks;
        cout<<"input the name"<<endl;
        cin>>name;
        cout<<"input the roll number"<<endl;
        cin>>roll;
        cout<<"input marks of subject 1,2 and 3"<<endl;
        cin>>sub1;
        cin>>sub2;
        cin>>sub3;
        marks=sub1+sub2+sub3;
        
        report[i].input(name,roll,marks,sub1,sub2,sub3);
       
    }
    //percentage
    cout<<"percentage of the student"<<endl;
    for(i=0;i<n;i++)
    {
        string name=report[i].getname();
        float marks=report[i].getmarks();
        cout<<name<<endl;
        cout<<"percentage is "<< (per=marks/3)<<endl;
        
    }
    
    //grade
    cout<<"grade of the student"<<endl;
    if(per>=90){
        cout<<"grade A"<<endl;
    }
    else if(per>=70&&per<90)
    cout<<"grde B"<<endl;
}
