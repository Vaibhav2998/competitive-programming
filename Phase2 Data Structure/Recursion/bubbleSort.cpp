#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

  if(size == 1 || size == 0){
    return;
  }

  for(int i=0; i<size-1;i++){
    if(arr[i] > arr[i+1]){
      swap(arr[i], arr[i+1]);
    }
  }

  bubbleSort(arr,size-1);
}


void printArray(int arr[], int size){

  if (size == 0){
    return;
  }
  cout << arr[0] << " ";
  printArray(arr+1, size-1);
}

int main() {
  cout<<endl;
  cout<< "---------Bubble Sort----------" << endl;
  int arr[8] = {1,2,3,4,5,0,999,12};

  cout<< endl;
  cout<< "Before" << endl;
  printArray(arr,8);
  bubbleSort(arr,8);
  cout<< endl;
  cout<< "After" << endl;
  printArray(arr,8);
    cout<<endl;
  
}