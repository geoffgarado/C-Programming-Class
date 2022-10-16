#include <iostream>

using namespace std;

int main(){
  int m1, m2, m3, m4;
  cout << "\tPlease Enter your marks\n";
  cout << "Mark 1: "; cin >> m1;
  cout << "Mark 2: "; cin >> m2;
  cout << "Mark 3: "; cin >> m3;
  cout << "Mark 4: "; cin >> m4;
  int avg = (m1 + m2 + m3 + m4) / 4;

  if (avg > 50){
    cout << "\n\tYou Passed! :D";
  } else {
    cout << "\n\tYou Failed :(";
  }
  return 0;
}
