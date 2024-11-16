#include <bits/stdc++.h>
using namespace std;

class library
{
public:
  string title, author;
  int isbn;
  bool availability = true;

  void registerInput(string title, string author, int isbn)
  {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
  }

  void display()
  {
    cout << "\ntitle: " << title << "author: " << author << "isbn: " << isbn << "availability: " << availability << endl;
  }
  string issue()
  {
    return title;
  }
  void markIssued()
  {
    if (availability)
    {
      availability = false;
    }
    else
    {
      cout << "already issued" << endl;
    }
  }
  string returnBook()
  {
    return title;
  }
  void markreturned()
  {
    if (!availability)
    {
      availability = true;
    }
  }
};
int main()
{
  int n, i;
  cout << "input the number pf book records you want to store" << endl;
  library library[100];
  cin >> n;
  for (i = 0; i < n; i++)
  {
    string title, author;
    int isbn;
    cout << "input the title of the book" << endl;
    cin >> title;
    cout << "input the author of the book" << endl;
    cin >> author;
    cout << "input the isbn" << endl;
    cin >> isbn;

    library[i].registerInput(title, author, isbn);
  }

  // initial display
  cout << "\n\nregistered books" << endl;
  for (i = 0; i < n; i++)
  {
    library[i].display();
  }

  // issue a book
  cout << "input the title of issued  book" << endl;
  string issueName;
  cin >> issueName;
  for (i = 0; i < n; i++)
  {
    if (library[i].issue() == issueName)
    {
      library[i].markIssued();
      cout << "issued now" << endl;
      break;
    }
  }

  // return a book
  cout << "input the title of the returned  book" << endl;
  string returnName;
  cin >> returnName;
  for (i = 0; i < n; i++)
  {
    if (library[i].returnBook() == returnName)
    {
      library[i].markreturned();
      cout << "issued now" << endl;
      break;
    }
  }

  cout << "\n\nupdate details" << endl;
  for (i = 0; i < n; i++)
  {
    library[i].display();
  }
}