#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double a = 3.912348239293;

  double exl = 325e+2;

  float b = 3.912348239293f;

  float ex2 = 325e+2f;

  cout << "Displaying Output with fixed: " << endl;

  cout << "Double Type Number 1 = " << fixed << a << endl;

  cout << "Double Type Number 2 = " << fixed << exl << endl;

  cout << "Float Type Number 1 = " << fixed << b << endl;

  cout << "Float Type Number 2 = " << fixed << ex2 << endl;

  // Displaying with scientific Output
  
  cout << "\n Displaying Output with scientific: " << endl;
  cout << "Double Type Number 1 = " << scientific << a << endl;
  cout << "Double Type Number 2 = " << scientific << exl << endl;
  cout << "Float Type Number 1 = " << scientific << b << endl;
  cout << "Float Type Number 2 = " << scientific << ex2 << endl;

  return 0;
}
