#include <iostream>

using namespace std;

int main(){
  char decision;
  cout << "Did the student pass his/her assignment? [Y] or [N]: ";
  cin >> decision;
  if (decision == 'Y' || decision == 'y') {
    cout << "\nGood Job!";
  } else if (decision == 'N' || decision == 'n') {
    cout << "\nAsk the student what is wrong....";
  } else {
    cout << "Invalid Character. Aborting....";
    abort();
  } 
  return 0;
}
