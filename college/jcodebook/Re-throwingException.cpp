#include<bits/stdc++.h>
using namespace std;

void div(double num1,double num2){
  cout<<"inside the function"<<endl;
  try
  {
    if(num2==0.0) throw num2;
    else cout<<num1/num2<<endl;
  }
  catch(double)
  {
    cout<<"exception caught inside"<<endl;
    throw;
  }
  cout<<"end of function"<<endl;
  
}

int main()
{
  try
  {
    div(15.5,2.0);
    div(15.5,0.0);
  }
  catch(double x)
  {
    cout<<"exception caught:double type"<<endl;
  }
  cout<<"end main"<<endl;
}