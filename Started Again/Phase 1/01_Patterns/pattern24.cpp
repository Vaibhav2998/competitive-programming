#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number of row: " << endl;
  cin >> n;

  int i = 0;
  while(i<n){

    int space = i;
    while(space){
      cout << " ";
      space--;
    }

    int j = i+1;
    while(j <= n){
      cout << j;
      j++;
    }

    i++;
    cout << endl;
  }
}