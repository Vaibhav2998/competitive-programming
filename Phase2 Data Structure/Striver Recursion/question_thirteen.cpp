#include<iostream>
#include<vector>
using namespace std;


bool sumSubset(vector<int> nums, vector<int> &output, int index, int sum){

  if(index>=nums.size()){
    if(sum == 2){
      for(int i=0; i<output.size();i++){
        cout << output[i] << " ";
      }
      cout << endl;
      return true;
    }
    return false;
  }

  //include
  output.push_back(nums[index]);
  sum += nums[index];
  if(sumSubset(nums, output, index+1,sum) == true){
    return true;
  }


  //exclude
  output.pop_back();
  sum -= nums[index];
  if(sumSubset(nums, output, index+1,sum) == true){
    return true;
  }

  return false;

}

int main() {

  vector<int> nums = {1,2,1};
  vector<int> output;

  sumSubset(nums, output, 0, 0);

  
}