#include<iostream>
using namespace std;

int main() {
  
  char ch[6] = "abcde";

  cout << &ch << endl;
  char *ptr = &ch[0];

  cout << ptr << endl;

  char c = 'a';

  cout << c << endl;
  char *cha = &c;

  cout << cha << endl;
 }