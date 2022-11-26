#include<iostream>
using namespace std;

bool searchArr(int arr[], int size, int key){

  if(size==0){
    return false;
  }

  if(arr[0] == key){
    return true;
  }

  return searchArr(arr+1,size-1,key);
}

int main(){

  int arr[6] = {1,2,3,4,5,6};
  cout<< "Linear search" << endl;

  bool ifFound = searchArr(arr,6,15);

  if(ifFound){
    cout<<"Element present" << endl;
  } else{
    cout<<"Element not present" << endl;
  }

}