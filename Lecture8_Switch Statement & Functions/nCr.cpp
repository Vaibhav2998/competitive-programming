#include<iostream>
using namespace std;


int factorial(int num){

    int prod = 1;

    for(int i=1; i<=num; i++){
        prod = prod * i;
    }

    return prod;
}

int nCr(int n, int r){


    int num = factorial(n);

    int den = factorial(r) * factorial(n-r);

    int ans = num/den;

    return ans;
}


int main() {

    int n,r;

    cin >> n >> r;

    cout<<"nCr of n,r is: " << nCr(n,r);

}