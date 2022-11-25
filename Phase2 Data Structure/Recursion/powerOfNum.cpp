#include<iostream>
using namespace std;


int powerOf(int a, int b){

  cout<< "a is: " << a << " b is: " << b << endl;

  if(b==0){
    return 1;
  }

  if(b==1){
    return a;
  }

  int ans = powerOf(a,b/2);

  cout<< "After recursive call a is: " << a << " b is: " << b << endl;
  cout<< "Answer is: " << ans << endl;

  if(b&1 == 1){
    cout << "Inside odd wala if" << endl;
    return a * ans * ans;
  } else{
    cout << "Inside even wala if" << endl;
    return ans * ans;
  }
}

int main() { 
  cout<<"Aao power nikale" << endl;
  int a = 5;
  int b = 8;
  int power = powerOf(a,b);
  cout << "Power of " << a << " to the power " << b << " is " << power << endl; 
}