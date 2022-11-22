#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){

  int count = 0;
  vector<bool> prime(n+1, true);

  prime[0] = prime[1] = false;


  for(int i=2;i<n;i++){
    cout << "Prime[i] at " << i << " position : " <<  prime[i] << endl;
    if(prime[i]){
      count++;

      for(int j=2*i;j<n; j=j+i){
        cout << "Prime[j] at " << j << " position : " <<  prime[j] << endl;
        prime[j] = false;
      }
    }
  }
  return count;
}

int main() {

  int count = countPrime(11);

  cout << "Number of prime numbers are: " << count << endl;

  }