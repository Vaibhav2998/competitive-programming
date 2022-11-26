#include<iostream>
using namespace std;


int findPivot(int arr[], int start, int end){

  int cnt = 0;
  int pivotElement = arr[start];
  
  for(int i=start+1; i<=end;i++){
    if(arr[i] < pivotElement){
      cnt++;
    }
  }


  int pivotIndex = start+cnt;
  swap(arr[start], arr[pivotIndex]);

  while(start < pivotIndex && end >pivotIndex){

    while(arr[start] < pivotElement){
      start++;
    }

    while(arr[end] > pivotElement){
      end--;
    }

    if(start < pivotIndex && end >pivotIndex){
      swap(arr[start], arr[end]);
    }
  }


  return pivotIndex;
}

void quickSort(int arr[], int start, int end){

  if(start >= end){
    return;
  }

  int pivot = findPivot(arr,start,end);

  quickSort(arr,start,pivot-1);
  quickSort(arr,pivot+1,end);
}

int main() {
  
  int arr[11] = {33,103,342,1,2,43,12,4,-1,0,1};
  int n = 11;

  quickSort(arr, 0, n-1);

  for(int i=0; i < n;i++){
    cout<< arr[i] << " ";
  } cout << endl;
}