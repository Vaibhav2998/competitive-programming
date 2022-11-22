#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int size){

    int start = 0;
    int mid = 0;
    int end = size-1;

    while(mid<=end){
        if(arr[mid] == 0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }

        else if(arr[mid] == 2){
            swap(arr[mid], arr[end]);
            end--;
        }
    }
}


void printArray(int arr[], int size){

    for(int i=0;i <size;i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}


int main(){

    int arr[6] = {2, 1 ,2 ,0, 1, 0};

    sort012(arr,6);

    printArray(arr,6);



}