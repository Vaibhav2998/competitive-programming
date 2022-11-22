#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){

    int start = 0;
    int end = size-1;

    int mid =  start + (end-start)/2;

    while(start < end){
        
        if(arr[0] <= arr[mid]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return end;
}


int main(){

    int arr[5] = {7,9,1,2,3};
    int arr1[7] = {7,9,1,2,3,4,5};
    int arr2[7] = {7,9,8,10,11,1,2};

    int pivot1 = pivotElement(arr,5);
    int pivot2 = pivotElement(arr1,7);
    int pivot3 = pivotElement(arr2,7);

    cout<< pivot1 << " " <<pivot2 << " " <<pivot3;
}