#include <iostream>

using namespace std;

int main(){
  char character1 = 'A';

  // escape sequence for horizonal tab
  char character2 = '\t';

  char character3 = '5';

  // using escape sequence for new line

  char character4 = 'R';

  char character5 = 'a';

  //printing the variables
  
  cout << character1;
  cout << character2;
  cout << character3;
  cout << character4 << "A\xHn";
  cout << character5;

  return 0;
}
