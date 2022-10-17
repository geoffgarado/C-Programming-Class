#include <iostream>

using namespace std;

class Car {
  public:
    string brand, model;
    int year;
};

int main(){
  // Create an object for the class of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // More objects
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print the attributes
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

  return 0;
}
