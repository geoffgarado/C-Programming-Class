#include <iostream>

using namespace std;

class MyClass {
  public:
    void myMethod();
};

// Method/Function outside the class
void MyClass::myMethod(){
  cout << "Hello World!";
}

int main(){
  MyClass myObj;
  myObj.myMethod();
  return 0;
}
