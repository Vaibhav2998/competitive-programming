#include<iostream>
using namespace std;

int sumArray(int arr[], int size){

  if(size==1){
    return arr[0];
  }
  return sumArray(arr,size-1) + arr[size-1];
}


int main() {

  int arr[5] = {1,2,3,4,5};

  int ans = sumArray(arr, 5);

  cout << ans;
}