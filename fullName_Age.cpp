#include <iostream>
#include <string>

using namespace std;

int main(){
  int age;
  string name;

  cout << "Please type in your last name: " << endl;
  getline(cin, name);

  cout << "Please input your age: " << endl;
  cin >> age;

  cout << "Hello Sir/Ma'am " << name << ". You are at the age of " << age << " years old" << endl;
}
