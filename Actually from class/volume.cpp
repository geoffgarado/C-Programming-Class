#include <iostream>

using namespace std;

int main(){
  int length, width, area;

  cout << "Please Enter your length: ";
  cin >> length;
  cout << "Please Enter your your width: ";
  cin >> width;

  area = length * width;

  cout << "The area of the rectangle is " << area;

  return 0;
}
