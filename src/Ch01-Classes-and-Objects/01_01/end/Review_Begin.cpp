#include <iostream>

using namespace std;

class review
{
  unsigned int rating;
  string title;
  string text;

  void displaydetails() const
  {
    cout << "Rating: " << rating << "/5\nTitle: " << title << "\nText: " << text << endl;
  }
};