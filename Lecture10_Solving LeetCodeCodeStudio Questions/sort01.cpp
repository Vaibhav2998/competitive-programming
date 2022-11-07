#include<iostream>
using namespace std;


void sortOne(int arr[], int size){

    int i=0; 
    int j = size-1;

    while(i<=j){
        if (arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}


void printArray(int arr[], int size){
    for(int i=0;i<size; i++){
        cout<< arr[i] << " ";
    }
    cout <<  endl;
}

int main(){

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr , 8);
    printArray(arr, 8);
}