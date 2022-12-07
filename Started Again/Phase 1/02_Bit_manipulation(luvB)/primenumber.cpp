#include<iostream>
using namespace std;

int main() { 
  int n;
  cout<< "Enter a number: " << endl;
  cin >> n;

  bool isNotPrime = false;

  for(int i=2;i<n;i++){
    if(n%i == 0){
      isNotPrime = true; 
      break;
    }
  }

  if(isNotPrime == true){
    cout << "Not a prime number" << endl;
  } else{
    cout << "Prime number" << endl;
  }
}