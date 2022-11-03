#include <iostream>
#include <string>

using namespace std;

int main(){
  string food = "Fried Rice"; 
  string* ptr = &food; //  preffered pointer variable, with the name ptr, that stores the address of food
  // string *ptr
  // string * ptr

  cout << food << endl; // output Fried Rice

  cout << &food << endl; // outputs the address

  cout << ptr << endl; // outputs the address

  return 0;
}

/* A pointer however, is a variable that stores the memory address as its value.
   A pointer variable points to a data type (like int or string) of the same type,
   and is created with the * operator. The address of the variable you're working
   with is assigned to the pointer.
*/

