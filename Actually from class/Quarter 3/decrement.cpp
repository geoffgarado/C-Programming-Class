#include <iostream>

using namespace std;

int main(){
  int count_1 = 3;
  int count_2 = 3;

  while (--count_1 > 0) {
    cout << count_1 << "\n"; }

  while (count_2-- > 0)
    cout << count_2 << " ";

  return 0;
}
