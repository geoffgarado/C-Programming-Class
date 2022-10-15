#include <iostream>

using namespace std;

int main(){
  int divisor, dividend;

  cout << "Please enter the first number: ";
  cin >> dividend;
  cout << "Please enter the second number: ";
  cin >> divisor;
  cout << "The quotient is: " << (dividend / divisor) << endl;
  cout << "The remainder is: " << (dividend % divisor);

  return 0;
}
