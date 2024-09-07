#include<bits/stdc++.h>
using namespace std;

class bank{
    public:
    string name;
    int accountNum;
    float balance;
    double interest;

    void deposit(string name,int accountNum,float balance,double interest)
    {
         this->name=name;
         this->accountNum=accountNum;
         this->balance=balance;
         this->interest=interest;
    }
    void display()
    {
        cout<<"\n\nname is:"<<name<<"\naccount is"<<accountNum<<"\nbalance is: "<<balance<<"\nineterst is: "<<interest;
    }
    int getaccount()
    {
        return accountNum;
    }
    float getbalance()
    {
        return balance;
    }
    void setAmount(float balance)
    {
        this->balance=balance;
    }
};
int main()
{
    int n,i;
    bank numAccount[100];
    cout<<"input the number of bank accounts"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        
     string name;
        int account;
        float bal;
        double interest;
       
        cout<<"input the name"<<endl;
        cin>>name;
        cout<<"input the account number"<<endl;
        cin>>account;
        cout<<"input the balance"<<endl;
        cin>>bal;
        cout<<"interest is 10 percent of value "<<endl;
        interest=0.1*bal;
         
         numAccount[i].deposit(name,account,bal,interest);

    }

    //initial details
    cout<<"\n\ninitial details"<<endl;
    for(i=0;i<n;i++)
    {
    numAccount[i].display();
    }

    int withdrawAccount;
    int withdrawAmount;
    int realAmount;
    cout<<"\nwithdraw money"<<endl;
    cout<<"input the account from which you want to withdraw"<<endl;
    cin>>withdrawAccount;
    cout<<"amount to be withdraw"<<endl;
    cin>>withdrawAmount;
    for(i=0;i<n;i++)
    {
    if(numAccount[i].getaccount()==withdrawAccount)
    {
        realAmount= numAccount[i].getbalance();
          realAmount=realAmount-withdrawAmount;
          numAccount[i].setAmount(realAmount);
    }
    }


}