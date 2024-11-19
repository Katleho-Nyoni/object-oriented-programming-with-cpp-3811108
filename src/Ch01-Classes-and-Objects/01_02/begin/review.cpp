#include <iostream>

class Review
{
  unsigned int rating;
  std::string title;
  std::string text;

  void displayDetails() const
  {
    std::cout << "Rating: " << rating << "/5\nTitle: " << title << "\nText: " << text << std::endl;
  }
};