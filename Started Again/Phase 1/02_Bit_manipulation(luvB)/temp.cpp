#include<iostream>
using namespace std;

int main() {

  int a = 1;
  int b = 2;

  if(a-- > 0 || ++b > 2){
    cout << "First" << endl;
  } else{
    cout << "Second" << endl;
  }

  cout << a << " " << b;
}