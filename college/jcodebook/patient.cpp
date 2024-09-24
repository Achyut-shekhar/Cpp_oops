#include<bits/stdc++.h>
using namespace std;

class patient{
   private:
   string name;
   int bp;
   int heart_rate;
   public:
   patient(string name,int bp, int heart_rate)
   {
    this->name=name;
    this->bp=bp;
    this->heart_rate=heart_rate;
   }   
   void diplay(){
    cout<<name<<endl;
    cout<<bp<<endl;
    cout<<heart_rate<<endl;
}
   
friend void display(patient obj);
};
void display(patient obj){
    cout<<obj.name<<endl;
    cout<<obj.bp<<endl;
    cout<<obj.heart_rate<<endl;
}
int main(){
    patient obj("achyut",130,200);
    display(obj);//in this it is not under the class therefore we dont need a obj. to access and we will pass the object as paranthesis
    obj.diplay();//in this we are writing obj. becuase its under the class and to access class function we need a object to access this
}

