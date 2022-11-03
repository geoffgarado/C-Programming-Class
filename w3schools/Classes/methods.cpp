#include <iostream>

using namespace std;

class MyClass { // The class
  public:        // Access Specifier
    void myMethod(){ // Method/Function defined inside the class
    cout << "Hello World!";
  }
};

int main(){
  MyClass myObj; // Create an Object of MyClass
  myObj.myMethod();
  return 0;
}
