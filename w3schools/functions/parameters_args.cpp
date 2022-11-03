#include <iostream>

using namespace std;

/* Information can be passed to functions as a parameter. 
  * Parameters act as variables inside the function. Parameters are specified 
  * after the function name, inside the parentheses. You can add as many 
  * parameters as you want, just separate them with a comma.
*/

// Syntax

// void functionName(parameter1, parameter2, parameter3){
    // code to be executed
// }

// example

void namefunc(string fname){
  cout << fname << " Garado" << endl;
}

int myAge(int born){
  int current_yr;
  cout << "I was born in 2007, what year is it today?: ";
  cin >> current_yr;
  cout << "My age is ";
  return current_yr - born;
}

int main(){
  namefunc("Geoff");
  cout << myAge(2007) << " years old.";
  return 0;
}


