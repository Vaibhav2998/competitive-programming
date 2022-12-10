#include<iostream>
using namespace std;

void power(int a, int b){
  int ans = 1;
  for(int i=0;i<b;i++){
    ans *= a;
  }
  cout<< ans << endl;;
}

int main() {
  int a = 3;
  int b = 4;

  power(a,b);
}