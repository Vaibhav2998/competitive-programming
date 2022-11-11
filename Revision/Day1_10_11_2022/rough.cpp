#include<iostream>
using namespace std;

int hammingWeight(uint32_t n){
    int count = 0;

    while(n!=0){
        int bit = (n&1);
        if (bit==1){
            count += 1;
        }
        n >> 1;
    }

}

int main(){

/*
    uint32_t bit = 00000000000000000000000000001011;

    int ans = hammingWeight(bit);

    cout<<ans;
    */

   cout << (32&1);
}