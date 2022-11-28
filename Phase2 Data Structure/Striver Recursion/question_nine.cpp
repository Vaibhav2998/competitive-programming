#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
  if(start >= end){
    return;
  }

  swap(arr[start], arr[end]);
  reverse(arr, start+1, end-1);
}

void reverseSingle(int arr[], int size, int start){

  if(start >= size/2){
    return;
  }

  swap(arr[start], arr[size-start-1]);
  reverseSingle(arr, size, start+1);
}

int main() {

 // int arr[5] = {5,4,3,2,1};
  int arr2[6] = {1,2,3,4,0,1000};

 // reverse(arr,0,4);

  reverseSingle(arr2,6,0);

  for(int i=0; i<6;i++){
    cout << arr2[i] << endl;
  }
}