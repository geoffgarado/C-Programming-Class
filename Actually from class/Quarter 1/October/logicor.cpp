#include <iostream>

using namespace std;

int main(){
  int a = 5;
  int b = 7;

  cout << "Using Logic OR Operator\n";
  cout << (a == b) || (a > b); cout << "\n";
  cout << (a < b) || (a == b); cout << "\n";
  cout << (a < b) || (a > b); cout << "\n";
  cout << (a != b) || (a == b); cout << "\n";

  return 0;
}
