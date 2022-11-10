#include <iostream>

using namespace std;

int main(){
  int fnum, snum, temp;
  cout << "Swap two numbers : " << endl;
  cout << "------------------------" << endl;
  cout << "Input 1st Number : ";
  cin >> fnum;
  cout << "Input 2nd Number : ";
  cin >> snum;
  temp = fnum;
  fnum = snum;
  snum = temp;
  cout << "After swapping the 1st Number : " << fnum << endl;
  cout << "After swapping the 2nd Number : " << snum;
  return 0;
}
