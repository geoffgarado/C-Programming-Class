#include <iostream>

using namespace std;

void swapNums(int &x, &y){
  int z = x;
  x = y;
  y = z;
}

int main(){
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << firstNum << secondNum << endl;

  swapNums(firstNum, secondNum);

  cout << "After swap: " << endl;
  cout << firstNum << secondNum << endl;

  return 0;
}
