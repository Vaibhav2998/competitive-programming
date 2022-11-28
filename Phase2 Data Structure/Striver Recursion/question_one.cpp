#include<iostream>
using namespace std;

void printName(int i,int n) {
  if (i>n){
    return;
  }

  cout << "Vaibhav" << endl;
  printName(i+1,n);
}

int main() {

  int n;
  cout << "Number of times you want to prit name: " << endl;
  cin >> n;
  printName(1,n);
}