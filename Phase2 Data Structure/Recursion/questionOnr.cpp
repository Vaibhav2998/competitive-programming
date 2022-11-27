#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans) {

  if(index>=str.length()) {
    cout << "Inside IF str: " << str << " .Output: " << output << " .Index: " <<
  index << endl;
    ans.push_back(output);
    return;
  }

  cout << "Solve str: " << str << " .Output: " << output << " .Index: " <<
  index << endl;
  solve(str, output, index+1, ans);


  char element = str[index];
  output.push_back(element);
  cout << "After solve str: " << str << " .Output: " << output << " .Index: " <<
  index << " .Char elemnt: " << element << endl;
  solve(str, output, index+1, ans);
}

int main() {

  vector<string> ans;
  string output = "";
  int index = 0;
  
  solve("abc", output, index, ans);


}