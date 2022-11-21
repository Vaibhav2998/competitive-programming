#include<iostream>
using namespace std;


void sumArrayrow(int arr[][4], int row, int col){

  for(int i =0; i <row;i++){
    int sum = 0;
    for(int j=0; j<col; j++){
        sum += arr[i][j];
    }
    cout<< sum << endl;
  }
}


int maxArrayrow(int arr[][4], int row, int col){

  int maxsum = INT32_MIN;
  int ans = -1;
  for(int i =0; i <row;i++){
    int sum = 0;
    for(int j=0; j<col; j++){
        sum += arr[i][j];
    }
    if(sum> maxsum){
      maxsum = sum;
      ans = i;
    }
  }

  return ans;
}


int main() {

  int arr[3][4];

  cout<<"Enter the elements in 2d array: " << endl;

  for(int i = 0;i<3; i++ ){
    for(int j=0; j<4;j++){
      cin >> arr[i][j];
    }
  }

  cout<<"Prinitng the 2d array: " << endl;

  for(int i=0 ; i<3;i++){
    for(int j=0; j<4; j++){
      cout <<  arr[i][j] << " ";
    }
    cout << endl;
  }

  cout<< "Printint the sum row wise: " << endl;

  sumArrayrow(arr,3,4);

  int ans = maxArrayrow(arr,3,4);
  cout<< "Printint the max sum row wise: " << ans << endl;

}