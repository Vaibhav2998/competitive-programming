#include<iostream>
#include<vector>
using namespace std;

    void solve(vector<int>& candidates, int target, int index, vector<int> &ds,vector< vector <int>> &ans){
        
        if(index == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        
        //pick wala scenario
        if(candidates[index] <= target){
            ds.push_back(candidates[index]);
            cout << target << endl;
            solve(candidates, target - candidates[index], index, ds, ans);
            ds.pop_back();
        }
        
        //nonpick scenario

        solve(candidates, target, index+1, ds, ans);
    }

int main() {

        vector<int> candidates = {2,3,6,7};
        int target = 7;
        vector<int> ds;
        vector< vector <int>> ans;
        solve(candidates, target, 0, ds, ans);
        
}