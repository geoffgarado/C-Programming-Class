#include <iostream>

using namespace std;

void loopArray(){
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i < 4; i++) {
    cout << i << " : " << cars[i] << endl;
  }
}

int main(){
  loopArray();
  return 0;
}
