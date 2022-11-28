#include<iostream>
using namespace std;

void reversePrint(int n) {
  if(n<1){
    return;
  }

  cout << n << " ";
  reversePrint(n-1);
}

int main() {

  int n;
  cout << "Print number from " << endl;
  cin >> n;

  reversePrint(n);
}