#include<iostream>
using namespace std;

int main() {

  int n;
  cout<< "Enter row number: " <<endl;
  cin >> n;

  int i = 0;
  while(i<n){
    int j = 0;
    while(j<=i){
      char ch = 'A' + n - i + j - 1;
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}