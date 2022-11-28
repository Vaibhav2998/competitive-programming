#include<iostream>
#include<vector>
using namespace std;

void subsequence(vector<int> &ds, int arr[], int index, int size){

  if(index==size){
    for(auto it : ds){
      cout << it << " ";
    }
    if(ds.size() == 0){
      cout << "{}";
    } 
    cout << endl;
    return;
  }

  ds.push_back(arr[index]);
  subsequence(ds, arr, index+1, size);
  ds.pop_back();
  subsequence(ds, arr, index+1, size);
}

int main() {

  int arr[3] = {3,1,2};
  vector<int> ds;

  subsequence(ds,arr,0,3);

}