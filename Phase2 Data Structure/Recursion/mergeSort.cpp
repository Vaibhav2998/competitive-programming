#include<iostream>
using namespace std;


void merge(int arr[],int start, int end){

  int mid = start + (end-start) / 2;
  int len1 = (mid-start) + 1;
  int len2 = (end-mid);

  int *first = new int[len1];
  int *second = new int[len2];

  int maIndex = start;
  for(int i=0; i<len1; i++){
    first[i] = arr[maIndex++];
  }

  maIndex = mid+1;
  for(int j=0;j<len2; j++){
    second[j] = arr[maIndex++];
  }

  int index1 = 0;
  int index2 = 0;

  maIndex = start;

  while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
      arr[maIndex++] = first[index1++];
    }
    else{
      arr[maIndex++] = second[index2++];
    }
  }

  while(index1 < len1) {
    arr[maIndex++] = first[index1++];
  }

  while(index2 < len2) {
    arr[maIndex++] = second[index2++];
  }

}

void mergeSort(int arr[], int start, int end){

  if(start>=end){
    return;
  }

  int mid = start + (end-start) / 2;

  mergeSort(arr,start, mid);
  mergeSort(arr,mid+1,end);
  merge(arr,start,end);
}

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<< arr[i] << " ";
  } cout << endl;
}

int main() {
  

  int arr[5] = {12,44,2,14,100};
  int n = 5;

  cout << "Before Merge Sort: " << endl;
  printArray(arr,5);
  mergeSort(arr,0,n-1);

  cout << "After Merge Sort: " << endl;
  printArray(arr,5);

}