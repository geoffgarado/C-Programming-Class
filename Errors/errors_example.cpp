#include <iostream>

/*
 Compile time errors are errors that may fail the compiler
 from making the binary executable file.

 Run Time errors are warninggs that the terminal give so 
 that you can find and fix it before it becomes a problem
*/

int main(){
  //Compile Time Error example
  std::cout << "Hello World!" << std::endl
  // To fix the problem add a semi-colon

  // Run Time Error
  int value = 7/0
  std::cout << "value: " << value << std::endl;
    return 0;
  /*
   The warning shown in this example is that the
   compiler will panic that you are dividing 7 with 0.
   Although the compiler will still give a binary executable
   file, but will show a warning.
   */
}
