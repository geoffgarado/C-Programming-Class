#include <iostream>

using namespace std;

/* Switch is used when you want to find a match and whenever you find a match
 * it will print out text, if it does not able to find a match, it will display
 * another result.
*/

int main(){
  int day = 5;
  switch (day){
  case 1:
    cout << "Monday";
    break; // when it reaches "break" it will stop the execution of more code when a match is found.
  case 2: 
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Nothing matches the day.";
  }
  return 0;
}


