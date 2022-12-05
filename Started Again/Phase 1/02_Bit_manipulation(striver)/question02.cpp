#include<iostream>
using namespace std;

int main() {

  int a = 5;
  int b = 7;
  cout << "Before XOR a is " << a << " and b is " << b << endl;

  a = a^b;
  b = a^b;
  a = a^b;

  cout << "After XOR a is " << a << " and b is " << b << endl;
}