#include <iostream>
#include <string>
using namespace std;

// Base class
class Media
{
protected:
  string title;
  float price;

public:
  Media(string t = "", float p = 0.0) : title(t), price(p) {}

  virtual void display() const = 0; // Pure virtual function
  virtual ~Media() {}               // Virtual destructor
};

// Derived class for Book
class Book : public Media
{
private:
  int pageCount;

public:
  Book(string t, float p, int pc) : Media(t, p), pageCount(pc) {}

  void display() const override
  {
    cout << "Book Details:\n";
    cout << "Title: " << title << "\n";
    cout << "Price: $" << price << "\n";
    cout << "Page Count: " << pageCount << "\n";
  }
};

// Derived class for Tape
class Tape : public Media
{
private:
  float playTime; // in minutes

public:
  Tape(string t, float p, float pt) : Media(t, p), playTime(pt) {}

  void display() const override
  {
    cout << "Tape Details:\n";
    cout << "Title: " << title << "\n";
    cout << "Price: $" << price << "\n";
    cout << "Play Time: " << playTime << " minutes\n";
  }
};

// Main function
int main()
{
  // Create Book and Tape objects
  Media *mediaItems[2];
  mediaItems[0] = new Book("The Great Gatsby", 15.99, 180);
  mediaItems[1] = new Tape("Classic Rock Hits", 9.99, 90.5);

  // Display details using runtime polymorphism
  for (int i = 0; i < 2; ++i)
  {
    mediaItems[i]->display();
    cout << "----------------------\n";
  }

  // Clean up
  for (int i = 0; i < 2; ++i)
  {
    delete mediaItems[i];
  }

  return 0;
}
