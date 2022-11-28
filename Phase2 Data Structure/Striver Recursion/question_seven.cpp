#include<iostream>
using namespace std;

/*
void psumOf(int n, int sum){
  if(n<1){
    cout << "Sum is: " << sum << endl;
    return;
  }
  sumOf(n-1,n+sum);
}
*/

int rsumOf(int n){
  if(n==0){
    return 0;
  }

  return n + rsumOf(n-1);
}

int main() {
  int n;
  cout << "Enter number: " << endl;
  cin >> n;

  int ans = rsumOf(n);

  cout << ans << endl;

}