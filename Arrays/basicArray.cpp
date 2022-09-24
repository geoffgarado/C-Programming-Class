#include <iostream>

using namespace std;

int main(){
  /* Arrays are used to store multiple values in a single variable, instead of 
  * declaring separate variables for each value.
  *
  * To declare an array, define the variable type, specify the name of the array 
  * followed by square brackets and specify the number of elements it should 
  * store.
  */

  // string cars[4];

  /* We have now declared a variable that holds an array of four strings. To insert
  * values to it, we can use an array literal - place the values in a 
  * comma-separated list, inside curly braces.
  */

  string cars[4] = {"Volvo", "BMW", "Porsche", "Ford"};

  // An Array of Integers
  
  int myNum[3] = {10, 20, 30};

  // Accessing elements of an array

  cout << cars[0] // outputs Volvo
  cout << myNum[1] // outputs 20

  // changing the value of a specific element 

  cars[0] = "Ferrari";
  cout << cars[0];
  
  return 0;
}
