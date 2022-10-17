#include <iostream>

using namespace std;

int main(){
  int pi, r, h;

  pi = 3.14;
  r = 2;
  h = 3;

  double volume = (pi * (r * r) * h) / 3;

  cout << "The volume of the cone: " << volume;

  return 0;
}
