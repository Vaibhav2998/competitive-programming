#include<iostream>
using namespace std;


int main() {
  int n;
  cout << "Enter number of row: " << endl;
  cin >> n;

  int i = 0;
  int count = 1;

  while(i<n){
    int j = 0;
    while(j<n){
      char ch = 'A' + count - 1;
      cout << ch << " ";
      j++;
      count++;
    }
    cout << endl;
    i++;
  }
}