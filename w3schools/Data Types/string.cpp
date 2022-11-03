#include <iostream>
#include <string> // include string library

using namespace std;

// A string variable contains a collection of characters surrounded by double quotes
int main(){
  string greeting = "Hello";

  // String Concatenation
  string firstName = "Geoff ";
  string lastName = "Garado";
  string fullName = firstName + lastName;
  cout << fullName;
  
  /*
   *  A string in C++ is actually an object, which contain functions that can
   *  perform certain operations on strings. For example, you can also concatenate
   *  strings with the append() function.
  */
  
  string fullName2 = firstName.append(lastName);
  cout << fullName2 << " with append";

  // if you try to add a string with a number(int) an error occurs.
  
  // finding the length of a text
  cout << "The length of your name by characters is: " << fullName.length();
  
  // Accesing strings
  string myName = "Geoff Garado";
  cout << myName[0]; // outputs G

  /* the cin command considers a space, whitespace, tabs, etc as a terminating
   * which means that it can only display a single word(even if you type may words)
  */

  string urCrush;
  cout << "Type in the full name of your crush: ";
  cin >> urCrush;
  cout << "The name of your crush is: " << urCrush; // Only prints 1 word

  // To fix it use getline function
  string fullnCrush;
  cout << "Type in the full name of your crush: ";
  getline (cin, fullnCrush);
  cout << "The full name of your crush is: " << fullnCrush; // should be fixed
  return 0;
}
