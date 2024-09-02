#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;int j;
    char ch;
    cout << "input the string" << endl;
    getline(cin, str);
    int charFrequency[128] = {0};

    // Count the frequency of each character
    for (int i=0;str[i]!='\0';i++) {
        if (str[i] != ' ') {
            ch=str[i];
            charFrequency[ch]++;
        }
    }
    // Print non-repeating character
    for (int i=0;str[i]!='\0';i++) {
        ch=str[i];
        if (ch != ' ' && charFrequency[(ch)] == 1) {
            cout << ch << "\t";
        }
    }
}