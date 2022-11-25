#include <iostream>

using namespace std;

int main(){
  int number;
  cout << "Please enter 10 or 20 ";
  cin >> number;
  if (number == 10) {
    cout << "\nYou entered number 10!";
  } else if (number == 20) {
    cout << "You entered the number 20!";
  } else {
    cout << "Invalid character!";
  }
  return 0;
}
