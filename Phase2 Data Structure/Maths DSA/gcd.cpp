#include<iostream>
using namespace std;

int gcd(int a, int b){

  cout<< "a and b is " << a << " " << b << endl;
  if(a==0){
    return b;
  }

  if(b == 0){
    return a;
  }

  while(a!=b){
    cout<< "Inside while loop:" << endl;
    cout<< "Before a and b is " << a << " " << b << endl;
    if(a>b){
      a = a-b;
    }
    else if(b>a){
      b = b-a;
    }
    cout<< "After a and b is " << a << " " << b << endl;
  }
  
  cout<< "Before return value od a and b is " << a << " " << b << endl;
  return a;
}

int main() {


    int ans = gcd(24,76);

    cout << ans;
}