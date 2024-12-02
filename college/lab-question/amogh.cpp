

#include <vector>
#include <iostream>
using namespace std;
int main() 
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    int a;
    cin >> a; 
    int x, y;
    cin >> x >> y; 
    cout << "Original size: " << v.size() << endl;
    if (a >= 0 && a < v.size()) 
        v.erase(v.begin() + a);
    v.erase(v.begin() + x, v.begin() + y);
    cout << "Modified vector: ";
    for (auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *it << " ";
    }
    cout << endl;
  return  0;
}
