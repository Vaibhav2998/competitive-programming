#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solving(int index, int target, vector<int>& ds, vector<vector<int>>& ans, vector<int>& candidates) {
    
    if( target == 0){
        ans.push_back(ds);
        return;
    }
    
    for(int i=index; i<candidates.size(); i++){
        if(candidates[i] > target) break;
        if(i>index && candidates[i] == candidates[i-1]) continue;
        ds.push_back(candidates[i]);
        int tgt = target - candidates[i];
        solving(index+1,tgt, ds, ans, candidates);
        ds.pop_back();
    }
}

int main() {

  vector<int> candidates = {1,1,1,2,2};
  sort(candidates.begin(), candidates.end());
  vector<vector<int>> ans;
  vector<int> ds;
  
  solving(0, 4, ds, ans, candidates);
  //return ans;
  
}