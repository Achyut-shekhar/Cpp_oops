// An electricity board charges the following rates to domestic users to discourage
// large consumption of energy.
// For the first 100 units: - 60 P per unit
// For the next 200 units: -80 P per unit
// Beyond 300 units: -90 P per unit
// All users are charged a minimum of Rs 50 if the total amount is more than Rs 300
// then an additional surcharge of 15% is added.
// Implement a C++ program to read the names of users and number of units consumed
// and display the charges with names

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int unit;
    int amount100=0,newValue=0,amount200=0,amount300=0,totalValue=0;
    cout<<"input the units:-"<<endl;
    cin>>unit;
    if(unit<=300)
    {
        amount100=100*0.6;
        int newUnit=unit-100;
        if(newUnit!=0)
        amount200=newUnit*0.8;
        printf("value of the %dunit is %d\n",unit,amount100+amount200);
       
    }
    else if(unit>300)
    {
        amount100=100*0.6;
        int newUnit=unit-100;
        if(newUnit!=0)
        amount200=200*0.8;
        int newUnit1=newUnit-200;
        amount300=newUnit1*0.9;
        printf("%d",amount100+amount200+amount300);
    }
}