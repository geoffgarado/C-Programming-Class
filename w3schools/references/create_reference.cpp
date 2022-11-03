#include <iostream>
#include <string>

using namespace std;

/* A reference variable is a "reference" to an existing variable, and is 
 * created with the & operator
*/

int main(){
  string food = "Fried Rice";
  string &meal = food =;

  cout << food << endl;
  cout << meal << endl;
  return 0;
}
