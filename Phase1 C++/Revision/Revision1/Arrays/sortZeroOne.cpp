#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

void sortZeroOne(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start<end){

        if(arr[start] == 1 && arr[end] == 0){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }

        else if(arr[start] == 0 && arr[end] == 1){
            start++;
            end--;
        }

        else if(arr[start] == 0 && arr[end] == 0){
            start++;
        }
        else if(arr[start] == 1 && arr[end] == 1){
            end--;
        }
        
    }
}

void printArray(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }

    cout<< endl;
}


int main() {


    int arr[8] = {1,1,1,1,0,0,1,0};

    printArray(arr,8);

    sortZeroOne(arr,8);

    printArray(arr,8);

}