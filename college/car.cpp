#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    string make, model;
    int year;
    float price;
    bool isAvailability;

void setter(string make,string model,int year,double price)
{
    this->make=make;
    this->model=model;
    this->year=year;
    this->price=price;
    isAvailability=true;
}
void updatePrice(double newPrice)
{
    price=newPrice;
    cout<<"price of "<<make<<" "<<model<<"updated to "<<price<<endl;
}

void marksold()
{
    if(isAvailability){
        isAvailability=false;
        cout<<"has been sold"<<endl;
    }
    else
    cout<<"avaialable"<<endl;
}

void displayCarSold()
{
    cout<<"make: "<<make<<"\nModel: "<<model<<"\nyear: "<<year<<"\nprice: "<<price<<"\navailability: "<<(isAvailability? "available":"not available")<<endl;
}
string getmodel()
{
    return model;
}

};

int main()
{
    int n;
    cout<<"enter the number of cars in inventory"<<endl;
    cin>>n;
    //create a inventory
    car inventory[100];
    //input n number of car
    for(int i=0;i<n;i++)
    {
        string make,model;
        int year;
        double price;
        cout<<"enter the details of the car"<<i+1<<endl;
        cout<<"make: "<<make;
        cin>>make;
        cout<<"model: "<<endl;
        cin>>model;
        cout<<"year: "<<endl;
        cin>>year;
        cout<<"price: ";
        cin>>price;

        //add the car to inventory
        inventory[i].setter(make,model,year,price);
    }

    //display initial car inventory
    cout<<"\n\ninitial inventory"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"car"<<i+1<<endl;
        inventory[i].displayCarSold();

    }

    //selling a  car
    string modelToSell,modelToUpdate;
    double newPrice;

    //selling a car
    cout<<"\n\nenter the model of the car to mark as sold"<<endl;
    cin>>modelToSell;
    bool carSold=false;
    for(int i=0;i<n;i++)
    {
        if(inventory[i].getmodel()==modelToSell)
        {
            inventory[i].marksold();
            carSold=true;
            break;
        }
    }
    if(!carSold)
    {
        cout<<"car model: "<<modelToSell<<"not found in inventory"<<endl;
    }
    //update the price
    cout<<"\n\nenter the model of the car to update price"<<endl;
    cin>>modelToUpdate;
    cout<<"enter the new price"<<endl;
    cin>>newPrice;
    bool priceUpdated=false;
    for(int i=0;i<n;i++)
    {
        if(inventory[i].getmodel()==modelToUpdate)
        {
            inventory[i].updatePrice(newPrice);
            priceUpdated=true;
            break;
        }
    }
    if(!priceUpdated)
    {
        cout<<"model: "<<modelToUpdate<<"not found"<<endl;
    }

    //display updated car details
    for(int i=0;i<n;i++)
    {
        cout<<"car \n"<<i+1<<endl;
        inventory[i].displayCarSold();
    }
    return 0;

}