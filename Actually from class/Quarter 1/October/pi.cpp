#include <iostream>

using namespace std;

int main(){
  double volume, radius;
  float pi = 3.14;
  int powered;
  cout << "Please Enter the radius: ";
  cin >> radius;

  powered = radius * radius * radius;
  volume = 4 * pi * powered / 3;

  cout << "The volume is: " << volume;
  return 0;
}
