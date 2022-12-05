#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter row number: " << endl;
  cin >> n;
  int i = 0;
  while(i<n){

    int space = 0;
    while(space<i){
      cout << " ";
      space++;
    }

    int j = 0;
    while(j<n-i){
      cout << n-i-j;
      j++;
    }
    cout << endl;
    i++;
  }
}