#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter a number: " <<endl;
  cin >> n;

  if(n%4== 0) {
    cout << n << endl;
  }

  if(n%4 == 1){
    cout << 1 <<endl;
  }

  if(n%4==2){
    cout << n+1 << endl;
  }

  if(n%4 == 3){
    cout << 0 << endl;
  }
}