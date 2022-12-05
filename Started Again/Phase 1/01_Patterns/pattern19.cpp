#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "ENter row number: " << endl;
  cin >> n;
  int i = 0;
  while(i<n) {
    int space = n-i-1;
    while(space != 0){
      cout << " ";
      space--;
    }

    int j = 0;
    while(j<=i){
      cout << "*";
      j++;
    }

    i++;
    cout << endl;
  }
}