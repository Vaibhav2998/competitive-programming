#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

  if(size==0 || size==1){
    return true;
  }

  if(arr[0] > arr[1]){
    return false;
  } else{
    return isSorted(arr+1, size-1);
  }

}

int main() {

  int arr[5]  = {1,2,3,3,3};

  bool arrSort = isSorted(arr,5);

  if(arrSort){
    cout<<"Array is sorted" << endl;
  } else{
    cout << "Array is not sorted" << endl;
  }

}