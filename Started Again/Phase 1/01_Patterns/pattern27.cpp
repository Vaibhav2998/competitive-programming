#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter number: " << endl;
  cin >> n;
  int i = 0;
  while(i<n){
    int j = 0;
    while(j<n-i){
      cout << j+1;
      j++;
    }

    int star1 = 0;
    while(star1<i){
      cout << "*";
      star1++;
    }

    int star2 = 0;
    while(star2<i){
      cout << "*";
      star2++;
    }

    int k = 0;
    while(k < n-i){
      cout << n-i-k;
      k++;
    }

    cout << endl;
    i++;
  }
}