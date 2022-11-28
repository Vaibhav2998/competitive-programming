#include<iostream>
using namespace std;

void backtracking(int i, int n){
  if(i<1){
    return;
  }

  backtracking(i-1,n);
  cout << i << endl;
}

int main() {
  int n;
  cout << "Enter number: " << endl;
  cin >> n;

  backtracking(n,n);
}