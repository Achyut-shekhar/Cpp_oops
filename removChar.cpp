#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch;
    cout<<"input the string"<<endl;
    getline(cin,str);
    cout<<"input the character want to remove"<<endl;
    cin>>ch;
    string result;
    //this for loop iterate each character and give it to the cha character.
    for (char cha : str) {
        if (cha != ch) {
            result += cha;
        }
    }
    cout << "Updated string: " << result << endl;
    
}