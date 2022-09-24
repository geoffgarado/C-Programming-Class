// never forget to use the <iostream> library
#include <iostream>

int addNumbers(int first_number, int second_number){
  int sum = first_number + second_number;
}

int main(int argc, char **argv)
{
  /*
  The "int" character implies that the variable being
  used is a number and not a string which are words or
  letters.
  */
  int firstNumber = 12;
  int secondNumber = 9;
  // firstNumber and secondNumber are variables

  int sum = firstNumber + secondNumber;
  
  sum = addNumbers(firstNumber, secondNumber);

  sum = addNumbers(34,7);

  /*
   sum is a variable that is equals to firstNumber added
   to secondNumber
   */

  std::cout << "The sum of the two numbers is: " << sum << std::endl;
  std::cout << "The sum of the two numbers is: " << addNumbers(23,8) << std::endl;
  return 0;
}

