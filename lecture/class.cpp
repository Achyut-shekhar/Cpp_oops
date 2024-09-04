#include<bits/stdc++.h>
// #include"heroclass.cpp"  //adding of the class file
using namespace std;
//creation of class
class hero{
    //properties
    private:
  int health;
    public:
  int age;
  char *name;
  static int timeToCompelete;

  hero(){
    cout<<"default  constructor called"<<endl;
    name=new char[100];
  }

  static int random()
  {
    return timeToCompelete;
  }
//copy constructor
hero(hero &temp)
{
   char *ch=new char[strlen(temp.name)+1];
   strcpy(ch,temp.name);
   this->name=ch;
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->age=temp.age;
}
// paramerterized constructor
hero(int health){
  cout<<"this->"<<this<<endl;
  this->health=health;
}
hero(int health,int age){
  cout<<"this->"<<this<<endl;
  this->health=health;
  this->age=age;
}
  void print(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<health<<endl;
  }
//getter
  int getHealth(){
    return health;
  }
  int getage(){
    return age;
  }
//setter
void sethealth(int h){
    health=h;
}
void setage(int ch){
    age=ch;
}
void setname(char name[])
{
  strcpy(this->name,name);
}
~hero(){
  cout<<"destructor"<<endl;
}
};
//intialization of the class
int hero::timeToCompelete=5;
 int main(){
//accessing the static function
cout<<hero::random<<endl;


// //access the member without the object
// cout<<hero::timeToCompelete<<endl;


// //static
// hero a;

// //dynamic
// hero *b=new hero();
// //manually calling destructor
// delete b;


// hero hero1;
// hero1.sethealth(20);
// hero1.setage(5);
// char name[10]="achyut";
// hero1.setname(name);

// // hero1.print();
// //use default copy constructor
// hero hero2;
// // hero2.print();
// hero1.name[0]='b';
// hero2=hero1;
// hero1.print();
// hero2.print();//we didnt change the hero 2 but it changed automatically

// //for copy constructor
// hero suresh;
// suresh.age=9;
// suresh.sethealth(99);

// hero shekh(suresh);
// shekh.print();





  // //object created statically

  //    hero ramesh(20); //constructor called
  //    cout<<"address of ramesh"<<&ramesh<<endl;

  // //dynamically
  // hero *h=new hero(11);   

  // hero temp(22,10);
  // temp.print();
     






//static allocation
//     hero a;
//     a.sethealth(80);
//     a.setage(10);
//     cout<<"health is: "<<a.getHealth()<<endl;
//     cout<<"age is: "<<a.age<<endl;

//     //dynamic allocation
//     hero *ptr= new hero;
//     ptr->sethealth(23);
//     ptr->setage(2);
//  cout<<"health is: "<<(*ptr).getHealth()<<endl;
//     cout<<"age is: "<<(*ptr).age<<endl;



    // //creation of object
    // hero h1;
    // cout<<"h1 health is "<<h1.getHealth()<<endl;
    // h1.sethealth(99);
    // h1.age=20;
    // cout<<"health is: "<<h1.getHealth()<<endl;
    // cout<<"age is: "<<h1.age<<endl;
    return 0;
}