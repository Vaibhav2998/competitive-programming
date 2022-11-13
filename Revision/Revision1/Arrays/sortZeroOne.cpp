#include<iostream>
#include<vector>
using namespace std;

void sortZeroOne(vector<int> arr) {
    int i = 0;
    int j = arr.size() -1;

    while(i<j){
        
        if (arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 1 ){
            j--;
        } else if(arr[i] == 0 && arr[j] == 0){
            i++;
        } else if(arr[i] == 0 && arr[j] == 1){
            i++;
            j--;
        }
    }
}

void printArray(vector<int> arr){

    for(int i=0; i<arr.size();i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> arr = {0,1,1,0,0,1};

    sortZeroOne(arr);

    printArray(arr);

}