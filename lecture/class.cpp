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

  hero(){
    cout<<"constructor called"<<endl;
  }
//paramerterized constructor
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
    cout<<age<<endl;
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
};

int main(){
  //object created statically

     hero ramesh(20); //constructor called
     cout<<"address of ramesh"<<&ramesh<<endl;

  //dynamically
  hero *h=new hero(11);   

  hero temp(22,10);
  temp.print();
     






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