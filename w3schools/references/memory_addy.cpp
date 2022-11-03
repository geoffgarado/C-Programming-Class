#include <iostream>
#include <string>

using namespace std;

/* In the example from the previous page, the & operator was used to create a 
   reference variable. But it can also be used to get the memory address of 
   a variable; which is the location of where the variable is stored on the 
   computer.

  When a variable is created in C++, a memory address is assigned to the 
  variable. And when we assign a value to the variable, it is stored in this 
  memory address
  
  To access it, use the & operator, and the result will represent where the 
  variable is stored
*/

int main(){
  string food = "Fried Rice";
  cout << &food;
  return 0;
}

