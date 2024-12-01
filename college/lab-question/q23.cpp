#include <iostream>
#include <stdexcept> // For std::invalid_argument
using namespace std;

// Function to find the largest proper divisor of a number
int largest_proper_divisor(int n)
{
  if (n == 0 || n == 1)
  {
    throw invalid_argument("the largest proper divisor is not defined for n");
  }
  return n / 2; // Largest proper divisor for numbers > 1
}

// Function to process input and handle exceptions
void process_input(int n)
{
  try
  {
    // Call largest_proper_divisor and print the result
    cout << "result=" << largest_proper_divisor(n) << endl;
  }
  catch (const invalid_argument &e)
  {
    // Handle exception and print the error message
    cout << e.what() << endl;
  }
  // Always print this line
  cout << "returning control flow to the caller" << endl;
}

int main()
{
  int n;
  cout << "input the n " << endl;
  cin >> n;         // Input the integer
  process_input(n); // Process the input
  return 0;
}
