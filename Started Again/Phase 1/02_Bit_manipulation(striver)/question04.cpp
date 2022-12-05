#include<iostream>
using namespace std;

int main() {
  int a = 2;
  int b = 6;
  int ans1, ans2;

  if(a%4== 0) {
    ans1 =  a ;
  }

  if(a%4 == 1){
    ans1 =  1;
  }

  if(a%4==2){
    ans1 =  a+1;
  }

  if(a%4 == 3){
    ans1 = 0;
  }

  // for b 

   if(b%4== 0) {
    ans2 =  b ;
  }

  if(b%4 == 1){
    ans2 =  1;
  }

  if(b%4==2){
    ans2 =  b+1;
  }

  if(b%4 == 3){
    ans2 = 0;
  }


  int finalans = ans1^ans2;

  cout << finalans << endl;
  




}