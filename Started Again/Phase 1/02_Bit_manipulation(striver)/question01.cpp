#include<iostream>
using namespace std;

int main () {
  int arr[9] = {2,1,2,5,6,5,7,7,6};

  int xorr = 0;

  for(int i=0;i<9;i++){
    xorr = xorr^arr[i];
  }
  
  cout << xorr <<endl;
}