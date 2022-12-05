#include<iostream>
using namespace std;

int main() {
  int number = 17;

  if( (number&1) == 0){
    cout << "Even" << endl;
  } else{
    cout << "Odd" << endl;
  }
}