#include<iostream>
using namespace std;


int main(){

    int arr1[5] = {1,2,3,1,2};
    int ans = 0;


    for(int i=0;i<5;i++){
        ans = arr1[i] ^ ans;
    }

    cout << ans;
}