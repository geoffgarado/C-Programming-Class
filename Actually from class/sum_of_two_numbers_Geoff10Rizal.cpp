#include <iostream>

using namespace std;

int main(){
  int firstNumber, secondNumber, sumofTwoNumbers;

  cout << "Enter two integers: ";
  cin >> firstNumber >> secondNumber;

  sumofTwoNumbers = firstNumber + secondNumber;

  cout << firstNumber << " + " << secondNumber << " = " << sumofTwoNumbers;

  return 0;
}
