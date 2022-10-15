#include <iostream>

using namespace std;

int main(){
  int num1, num2, num3, num4, num5, sum, median;

  cout << "Please Enter your first number: ";
  cin >> num1;
  cout << "Please Enter your second number: ";
  cin >> num2;
  cout << "Please Enter your third number: ";
  cin >> num3;
  cout << "Please Enter your fourth number: ";
  cin >> num4;
  cout << "Please Enter your fifth number: ";
  cin >> num5;

  sum = num1 + num2 + num3 + num4 + num5;

  cout << "The sum of the numbers is: " << sum << endl;
  cout << "The average is: " << (sum / 5);

  return 0;
}
