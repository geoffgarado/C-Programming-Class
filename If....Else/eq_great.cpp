#include <iostream>
#include <cmath>

using namespace std;

/* Print "EQ" if x is equal to y, print "GT" if x is greater than y,
  otherwise print "LT".
*/

int main(){
  int x, y;
  cout << "Please enter x value: ";
  cin >> x;

  cout << "Please enter y value: ";
  cin >> y;

  if (x == y) {
    cout << "EQ";
  } else if (x > y){
    cout << "GT";
  } else {
    cout << "LT"; 
  }
  return 0;
}

