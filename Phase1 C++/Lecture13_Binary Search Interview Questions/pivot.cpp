#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[0] <= arr[mid]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }

    return start;
}

int main(){

    int arr[5] = {3,8,10,17,5};

    cout << pivotElement(arr,5);

}