#include<bits/stdc++.h>
using namespace std;
string arrangeString(string str)
{
    char temp;
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]<str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
            
        }
    }
    return str;
    
}
int main()
{
    int flag;
    string str1,str2;
    cout<<"input the first string"<<endl;
    getline(cin,str1);
    cout<<"input the second string"<<endl;
    getline(cin,str2);
    str1=arrangeString(str1);
    str2=arrangeString(str2);
      for(int i=0;str1[i]!='\0';i++)
      {
          if(str1[i]!=str2[i])
          {
              flag=1;
              break;
          }
          
      }
      if(flag==1)
      {
          cout<<"not an anagram"<<endl;
      }
      else
      cout<<"Anagram"<<endl;
}
