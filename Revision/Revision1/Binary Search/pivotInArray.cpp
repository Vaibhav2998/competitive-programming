#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){

    int start = 0;
    int end = size-1;

    int mid =  start + (end-start)/2;

    while(start < end){
        if(arr[mid-1] > arr[mid] && arr[mid] < arr[mid+1]){
            return mid;
        }
        else if(arr[0] < arr[mid]){
            start = mid+1;
        } else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }
}


int main(){

    int arr[5] = {7,9,1,2,3};
    int arr1[7] = {7,9,1,2,3,4,5};
    int arr2[7] = {7,9,8,10,11,1,2};

    int pivot = pivotElement(arr2,7);

    cout<< pivot;
}