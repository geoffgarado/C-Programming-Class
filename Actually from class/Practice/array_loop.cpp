#include <iostream>

using namespace std;

// Useful for learning how arrays are counted in C++

void Array(){
  int x[5] = {1, 2, 3, 4 ,5};
  for (int i = 0; i < 5; i++){
    cout << i << " : " << x[i] << endl;  
  }
}

int main(){
  Array();
  return 0;
}
