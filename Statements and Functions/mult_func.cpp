#include <iostream>

using namespace std;

int multNumbers(int firstNum, int secondNum){
  int result = firstNum * secondNum;
  return result;
}


int main(){
  int product = multNumbers(10, 7);
  cout << "The result is: " << product;
  return 0;
}
