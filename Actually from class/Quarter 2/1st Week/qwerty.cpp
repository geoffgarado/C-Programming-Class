#include <iostream>

using namespace std;

int main(){
  char letter;
  cout << "Please enter a letter : ";
  cin >> letter;
  switch (letter) {
    case 'Q': case 'q':
      cout << "\nYou entered Q!";
      break;
    case 'W': case 'w':
      cout << "\nYou entered W!";
      break;
    case 'E': case 'e':
      cout << "\nYou entered E!";
      break;
    case 'R': case 'r':
      cout << "\nYou entered R!";
      break;
    case 'T': case 't':
      cout << "\nYou entered T!";
      break;
    case 'Y': case 'y':
      cout << "\nYou entered Y!";
      break;
    default:
      cout << "\n\n\n\tInvalid Character";
  }
  return 0;
}
