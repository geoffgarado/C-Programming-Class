/* Write a program that contains statements that outputs the value of five or six variables that have been
* declared, but not initialized. Compile and run the program. What is the output? Explain.
*/

#include <iostream>

using namespace std;

int main(){
  int val1, val2, val3, val4, val5;
  cout << "Enter 5 Values" << endl;
  cout << "Value 1:   ";
  cin >> val1;
  cout << "Value 2:   ";
  cin >> val2;
  cout << "Value 3:   ";
  cin >> val3;
  cout << "Value 4:   ";
  cin >> val4;
  cout << "Value 5:   ";
  cin >> val5;
  cout << "All the values you entered: " << val1 << ", " << val2 << ", " << val3 << ", " << val4 << ", " << val5;
  return 0;
}

