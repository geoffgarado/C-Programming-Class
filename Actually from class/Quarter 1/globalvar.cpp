#include <iostream>

using namespace std;

int globl;

int main(){
  int a = 5, sum;

  cout << "Please enter a value for Global Variable: ";
  cin >> globl;
  
  cout << "We are going to add " << globl << " to our local variable which has the local variable of 5" << endl;
  sum = globl + a;
  cout << globl << " + " << a << " = " << sum;

  return 0;
}
