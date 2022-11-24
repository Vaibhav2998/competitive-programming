#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){

  int mid = start + (end-start)/2;

  if(start>end){
    return false;
  }

  if(arr[mid] == key){
    return true;
  }
  else if(arr[mid] > key){
    return binarySearch(arr,start,mid-1,key);
  } else{
    return binarySearch(arr,mid+1,end,key);
  }
}

int main() {

  int arr[5] = {2,4,6,45,99};

  bool found = binarySearch(arr,0,4,999);

  if(found){
    cout<<"Element found" << endl;
  } else{
    cout<<"Element not found" << endl;
  }


}