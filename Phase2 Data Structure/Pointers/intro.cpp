#include<iostream>
using namespace std;

int main() {

/*
  int num = 5;

  cout<<"Number store in num is: " << num << endl;

  cout << "Address of " << num << " is at " << &num << endl;

  int *ptr = &num;

  cout<< "Num ka output: " << num << endl;
  cout<< "Pointer ka output: " << *ptr << endl;

  num++;

  cout<< "Num ka output: " << num << endl;
  cout<< "Pointer ka output: " << *ptr << endl;

  char ch = 'a';
  char *ptr2 = &ch;

  cout<< "Num ka output: " << ch << endl;
  cout<< "Pointer ka output: " << *ptr2 << endl;

  cout<< "Size of integer is: " << sizeof(num) << endl;
  cout<< "Size of integer pointer is: " << sizeof(ptr) << endl;
  cout<< "Size of character is: " << sizeof(ch) << endl;
  cout<< "Size of character pointer is: " << sizeof(ptr2) << endl;
  
  (*ptr)++;
  cout<< "Pointer se increment krte hua vaibhav: " << endl;
  cout<< "Num ka output: " << num << endl;
  cout<< "Pointer ka output: " << *ptr << endl;

*/

  int num = 5;
  int *p = &num;

  cout<< "Pointer ka address: " << p << endl;
  cout << "Pointer me value: " << *p << endl;

  cout<<"Pointer ka address + 1; " << endl;
  p = p + 1;
  cout<< "Address update hone ke baad pointer: " << p << endl;


  cout<<"Pointer ka address + 1; " << endl;
  p = p + 1;
  cout<< "Address update hone ke baad pointer: " << p << endl;



  return 0;
}