#include <iostream>
#include <string>

using namespace std;

int main(){
  string first_name, surname, city, province, barangay, contact_number, house_num;
  int age;

  cout << "Please Enter your first name: ";
  getline(cin, first_name);
  cout << "Please Enter your Surname: ";
  getline(cin, surname);
  cout << "Please Enter your age: ";
  cin >> age;
  cout << "Please Enter your house number: ";
  cin >> house_num;
  cout << "Please Enter your barangay: \n";
  getline(cin, barangay);
  cout << "Please Enter your city: ";
  getline(cin, city);
  cout << "Please enter your province: ";
  getline(cin, province);
  cout << "Please Enter your contact number: ";
  getline(cin, contact_number);

  cout << "Your Full name is: " << first_name << " " << surname << endl;
  cout << "Your age is: " << age << endl;
  cout << "Your house number is: " << house_num << endl;
  cout << "You live in the barangay " << barangay << endl;
  cout << "You live in the city of " << city << endl;
  cout << "In the province of " << province << endl;
  cout << "Your contact number is: " << contact_number << endl;

  return 0;

}
