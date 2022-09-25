#include <iostream>

using namespace std;

void getArrayLength(){
  int myNums[5] = {11, 12, 13, 14, 15};
  int getLength = sizeof(myNums) / sizeof(int);
  cout << getLength;
}

int main(){
  getArrayLength();
  return 0;
}
