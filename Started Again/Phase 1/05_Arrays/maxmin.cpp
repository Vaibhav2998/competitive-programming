#include<iostream>
using namespace std;

int maxElement(int arr[], int size){
  int maxi = INT32_MIN;
  for(int i=0;i<size;i++){
    maxi = max(maxi,arr[i]);
  }
  return maxi;
}

int minElement(int arr[], int size){
  int mini = INT32_MAX;
  for(int i=0;i<size;i++){
    mini = min(mini,arr[i]);
  }
  return mini;
}

int main() {

  int arr[5] = {1,2,5,3,4};

  int maxEle = maxElement(arr,5);
  int minEle = minElement(arr,5);

  cout << "Max is: " << maxEle << " Min is " << minEle << endl;
}