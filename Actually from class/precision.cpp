#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double a = 3.912348239293;
  float b = 3.912348239293f;

  cout << setprecision(11);
  cout << a << endl;

  cout << setprecision(7);
  cout << b << endl;
}
