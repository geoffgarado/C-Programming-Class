#include <iostream>
#include <string>


using namespace std;

int main(){
  string first_initial, second_initial;
  cout << "Enter two initials, without any periods: \b";
  cin >> first_initial >> second_initial;
  cout << "The two initials are: " << first_initial << second_initial << endl;
  cout << "Once more with a space: " << first_initial << " " << second_initial;
  return 0;
}
