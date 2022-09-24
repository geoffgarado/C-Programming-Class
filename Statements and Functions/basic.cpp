#include <iostream>


// addNumbers is a function that can only be used when called.
int addNumbers(int first_parameter, int second_parameter){
  int result = first_parameter + second_parameter;
  return result;
}
 
int main(){
  
  int first_number {3}; // statements
  int second_number {7};

  std::cout << "First Number: " << first_number << std::endl; // 3 
  std::cout << "Second Number: " << second_number << std::endl; // 7

  int sum = first_number + second_number; // 10
  std::cout << "Sum: " << sum << std::endl;

  sum = addNumbers(25, 7); // 32
  std::cout << "Sum: " << sum << std::endl;

  return 0;
}
