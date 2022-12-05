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

    int star = n - i;
    while(star){
      cout << "*";
      star--;
    }

    i++;
    cout << endl;
  }
}