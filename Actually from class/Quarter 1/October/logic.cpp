#include <iostream>

using namespace std;


int main(){
  int a = 5;
  int b = 9;
  cout << "Using Logical AND Operator" << endl;
  cout << (a == b) && (a > b); cout << "\n";
  cout << (a > b) && (a == b); cout << "\n";
  cout << (a < b) && (a != b); cout << "\n";

  return 0;
}
