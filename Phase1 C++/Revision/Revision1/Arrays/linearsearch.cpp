#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int search){

    for(int i=0;i<size;i++){
        if( arr[i] == search){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[6] = {23,43,12,66,37329, 5443};

    int ans = linearSearch(arr,6,5444);

    cout << "Index is: " << ans << endl;
}