#include<iostream>
#include<vector>
using namespace std;

bool posibleSolution(vector<int> arr, int n, int m, int mid){

    int studentCount = 1;
    int pageCount = 0;

    for(int i=0; i<n;i++){

        if (pageCount + arr[i] <= mid){
            pageCount += arr[i];
        } else{
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> arr, int n, int m){

    int start = 0;
    int sum = 0;

    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(posibleSolution(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main() {

    vector<int> book = {10,20,30,40};

    int mini = bookAllocation(book, 4, 2);

    cout<< mini;
    
}