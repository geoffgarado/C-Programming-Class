#include <iostream>

using namespace std;

int main(){
  char first_letter, second_letter, third_letter, fourth_letter, fifth_letter;

  cout << "Please Enter the first letter of your name: " << endl;
  cin >> first_letter;
  cout << "Please Enter the second letter: " << endl;
  cin >> second_letter;
  cout << "Please Enter your third letter: " << endl;
  cin >> third_letter;
  cout << "Please Enter your fourth letter: " << endl;
  cin >> fourth_letter;
  cout << "Please Enter your fifth letter: " << endl;
  cin >> fifth_letter;

  cout << "ASCII Value of letter " << first_letter << " is " << int(first_letter) << endl;
  cout << "ASCII Value of letter " << second_letter << " is " << int(second_letter) << endl;
  cout << "ASCII Value of letter " << third_letter << " is " << int(third_letter) << endl;
  cout << "ASCII Value of letter " << fourth_letter << " is " << int(fourth_letter) << endl;
  cout << "ASCII Value of letter " << fifth_letter << " is " << int(fifth_letter);

  return 0;

}
