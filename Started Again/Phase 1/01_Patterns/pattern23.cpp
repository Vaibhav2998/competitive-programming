#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number of row: " << endl;
  cin >> n;

  int i = 0;
  while(i<n){

    int space = n-i-1;
    while(space){
      cout << " ";
      space--;
    }

    int star = i+1;
    while(star){
      cout << i+1;
      star--;
    }

    i++;
    cout << endl;
  }
}