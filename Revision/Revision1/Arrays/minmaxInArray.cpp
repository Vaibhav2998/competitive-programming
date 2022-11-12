#include<iostream>
using namespace std;

int maximum(int arr[], int n){

    int maximum = INT32_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] >= maximum){
            maximum = arr[i];
        }
    }

    return maximum;
}

int minimum(int arr[], int n){

    int minimum = INT32_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] <= minimum){
            minimum = arr[i];
        }
    }

    return minimum;
}

int main(){

    int arr[6] = {1,2,3, 100,-1,5};

    int max = maximum(arr,6);
    int min = minimum(arr,6);

    cout<<max << " " << min<< endl;
}