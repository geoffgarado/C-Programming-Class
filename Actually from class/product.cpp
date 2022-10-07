#include <iostream>

using namespace std;

int main(){
  int num1, num2, num3, product;

  cout << "Please Enter your first Number: ";
  cin >> num1;

  cout << "Please Enter your second Number: ";
  cin >> num2;

  cout << "Please Enter your third Number: ";
  cin >> num3;

  product = num1 * num2 * num3;

  cout << "The product of the three numbers are: " << product;

  return 0;
}
