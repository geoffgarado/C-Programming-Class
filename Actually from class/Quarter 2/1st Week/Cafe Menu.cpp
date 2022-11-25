#include <iostream>

using namespace std;

int main(){
  int number;
  cout << "==========================";
  cout << "\n   WELCOME TO ICT CAFE    ";
  cout << "\n==========================";
  cout << "\n\nPLEASE CHOOSE YOU MEAL";
  cout << "\n******************************\n";
  cout << "\n  Meal 1: Basil And Pepperoni pasta";
  cout << "\n  Meal 2: Adobo with rice";
  cout << "\n  Meal 3: Spaghetti and Chicken";
  cout << "\n  Meal 4: Nilagang Rat";
  cout << "\n  Meal 5: Rattatouille\n";
  cout << "******************************\n";
  cout << "What would you like to eat? Please enter a number to make your choice: ";
  cin >> number;
  switch (number) {
    case 1:
      cout << "\nYou choose Meal 1.\nBasil and Pepperoni pasta\nEnjoy your meal!";
      break;
    case 2:
      cout << "\nYou choose Meal 2.\nAdobo with rice\nEnjoy your meal!";
      break;
    case 3:
      cout << "\nYou choose Meal 3.\nSpaghetti and Chicken\nEnjoy your meal!";
      break;
    case 4:
      cout << "\nYou choose Meal 4.\nNilagang Rat\nEnjoy your meal!";
      break;
    case 5:
      cout << "\nYou choose Meal 5.\nRattatouille\nEnjoy your meal!";
      break;
    default:
      cout << "\nYou will starve!";
  }
  return 0;
}
