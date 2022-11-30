#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

/*
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
*/
int main() {

    vector< vector<int>> ans = {{1,2,5}, {1,7}, {7,1}};

    for(int i=0; i<ans.size() ;i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        } cout << endl;
    }

    sort(ans[0].begin(), ans[0].end());
cout << endl;cout << endl;

    for(int i=0; i<ans.size() ;i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        } cout << endl;
    }
        
}