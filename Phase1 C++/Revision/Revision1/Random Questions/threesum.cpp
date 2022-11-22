#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

vector<int> threesome(vector<int> arr, int sum){

    int i = 0;
    int j = 1;
    int k = 2;

    vector<int> ans;

    while(k < arr.size()){
        if(arr[i] + arr[j] + arr[k] == sum){
            ans.push_back({arr[i], arr[j], arr[k]});
            
        }
        i++;
        j++;
        k++;
    }
}

int main(){
    
}