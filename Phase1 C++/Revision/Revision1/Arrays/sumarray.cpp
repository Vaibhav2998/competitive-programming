#include<iostream>
using namespace std;

int sumarray(int arr[],  int size){

    int sum = 0;
    for(int i=0; i<size;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[5]  = {1,2,3,4,5};

    int ans = sumarray(arr, 5);

    cout << "Sum is: " << ans << endl;

}