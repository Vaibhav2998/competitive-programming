#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number of row: " << endl;
  cin >> n;

  int i = 0;
  int count = 1;
  while(i<n){

    int space = n-i-1;
    while(space){
      cout << " ";
      space--;
    }

    int j = 0;
    while(j <= i){
      cout << count;
      j++;
      count++;
    }

    i++;
    cout << endl;
  }
}