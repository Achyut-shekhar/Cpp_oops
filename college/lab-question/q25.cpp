#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    // Input size of vector
    cin >> N;

    vector<int> vec(N);
    cout << "\n"
         << "input the element of the vector" << endl;
    // Input elements of the vector
    for (int i = 0; i < N; ++i)
    {
        cin >> vec[i];
    }
    cout << "\n"
         << "input the position to erase" << endl;
    int x;
    // Input position to erase (1-based index)
    cin >> x;

    // Erase the element at position x (convert 1-based to 0-based index)
    vec.erase(vec.begin() + (x - 1));
    cout << "\n"
         << "input the range you want to delete" << endl;
    int a, b;
    // Input range to erase (inclusive of a and exclusive of b)
    cin >> a >> b;

    // Erase the range (convert 1-based to 0-based index)
    vec.erase(vec.begin() + (a - 1), vec.begin() + (b - 1));

    // Output the size of the vector
    cout << vec.size() << endl;
    cout << "\n"
         << "updated array" << endl;
    // Output the remaining elements of the vector
    for (int elem : vec)
    {
        cout << elem << " ";
    }

    return 0;
}
