#include <iostream>

using namespace std;

int main(){
  int i;
  cout << "Enter a number from 1 to 12 display the corresponding month." << endl;
  cout << "Please Type it here: ";
  cin >> i;

  switch (i){
    case 1:
      cout << "Month of January.";
      break;
    case 2:
      cout << "Month of February.";
      break;
    case 3:
      cout << "Month of March.";
      break;
    case 4:
      cout << "Month of April.";
      break;
    case 5:
      cout << "Month of May.";
      break;
    case 6:
      cout << "Month of June.";
      break;
    case 7:
      cout << "Month of July.";
      break;
    case 8:
      cout << "Month of August.";
      break;
    case 9:
      cout << "Month of September.";
      break;
    case 10:
      cout << "Month of October.";
      break;
    case 11:
      cout << "Month of November.";
      break;
    case 12:
      cout << "Month of December.";
      break;
    default:
      cout << "Invalid input.";
    }
  return 0;
}
