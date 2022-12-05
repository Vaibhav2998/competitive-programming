#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter row number: " << endl;
  cin >> n;
  int i = 0;
  int count = 0;
  while(i<n){
    int j = 0;
    while(j<=i){
      char ch = 'A' + count;
      cout << ch << " ";
      count++;
      j++;
    }
    cout << endl;
    i++;
  }
}