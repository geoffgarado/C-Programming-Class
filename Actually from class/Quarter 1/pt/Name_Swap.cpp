#include <iostream>
#include <string>

using namespace std;

int main(){
  string fname, lname;
  cout << "Print the name in reverse where last name comes first:" << endl;
  cout << "-----------------------------------------------------------\n";
  cout << "Input First Name : ";
  cin >> fname;
  cout << "Input Last Name " ;
  cin >> lname;
  cout << "Name in reverse: " << lname << " " << fname;
  return 0;
}
