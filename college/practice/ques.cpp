#include <bits/stdc++.h>
using namespace std;

// Function to compare two strings lexicographically
bool isLessThan(const char *str1, const char *str2)
{
  while (*str1 != '\0' && *str2 != '\0')
  {
    if (*str1 < *str2)
    {
      return true;
    }
    else if (*str1 > *str2)
    {
      return false;
    }
    str1++;
    str2++;
  }
  // If we reach the end of one string, the shorter one is "less"
  return *str1 == '\0' && *str2 != '\0';
}

// Function to swap two strings
void swap(char *&str1, char *&str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}

// Function to sort an array of strings
void sortStrings(char *arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (isLessThan(arr[j + 1], arr[j]))
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main()
{
  const int MAX_STRINGS = 100;
  const int MAX_LENGTH = 100;

  char *strings[MAX_STRINGS];
  int n = 0;

  cout << "Enter strings (type 'exit' to finish):" << endl;

  while (n < MAX_STRINGS)
  {
    strings[n] = new char[MAX_LENGTH];
    cin >> strings[n];
    cout << "\n"
         << "this is a test of indexing\t" << strings[0] << endl;
    if (strcmp(strings[n], "exit") == 0)
    {
      delete[] strings[n]; // Free memory for the exit string
      break;
    }
    n++;
  }

  sortStrings(strings, n);

  cout << "Sorted strings in lexicographical order:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << strings[i] << endl;
    delete[] strings[i]; // Free memory for each string
  }

  return 0;
}