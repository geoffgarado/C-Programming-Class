#include <iostream>

using namespace std;

// A function is a block of code which only runs when it is called.
// You can pass data, known as parameters, into a function.
/* Functions are used to perform certain actions, and they are important for 
   reusing code: Define the code once, and use it many times.
*/

// Basic Syntax

void myFunc() { // decleration: the return type, the name of the function, and parameters(if any)
  // void means it has no return value
  // code to be executed
  // definition: the body of the function
}


// example

void bullShit(){
  cout << "I am calling cap!" << endl;
}

int main(){
  bullShit();
  bullShit();
  bullShit();
  return 0;
}

// outputs you capping 3x
