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
void setlevel(int ch){
    age=ch;
}
};

int main(){
    //static allocation
    hero a;

    //dynamic allocation
    int 



    // //creation of object
    // hero h1;
    // cout<<"h1 health is "<<h1.getHealth()<<endl;
    // h1.sethealth(99);
    // h1.age=20;
    // cout<<"health is: "<<h1.getHealth()<<endl;
    // cout<<"age is: "<<h1.age<<endl;
    return 0;
}