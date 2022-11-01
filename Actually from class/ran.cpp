#include <iostream>

using namespace std;

int main(){
  int l, w;
  cout << "\tPlease Enter the length & width\n";

  cout << "Enter length: "; cin >> l;
  cout << "Enter width: "; cin >> w;

  cout << "The area is " << (l * w) << "\nThe perimeter is " << (2 * (l + w));

  return 0;
}
