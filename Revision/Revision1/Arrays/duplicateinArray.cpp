#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    int ans = 0;

    for(int i=0;i<size;i++){
        ans = (ans^arr[i]);
        cout << "Loop one: " << ans << endl;
    }

    for(int j = 1; j<=size-1;j++){
        ans = (ans^j);
        cout << "Loop two: " << ans << endl;
    }

    return ans;
}

int main(){

    int arr[5] = {4, 2, 1, 3, 1};

    int answer = findDuplicate(arr,5);

    cout << answer;

}