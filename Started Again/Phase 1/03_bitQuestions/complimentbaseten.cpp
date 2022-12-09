#include<iostream>
#include<math.h>
using namespace std;



int main() {

  int n = 310350;
  long long int ans = 0;
  int i = 0;
  
  while(n!=0) {
    int bit = n&1;
    int xorr = (bit^1);
    ans = (xorr * pow(10,i)) + ans;
    n = n >> 1;
    i++;
  }

  if(ans == 0){
    cout << 0 << endl;
    return 0;
  }

  cout << ans << endl;
  int decimal = 0;
  int count = 0;
  //converting ans to decimal
  while(ans!=0){
    int digit = ans%10;
    if(digit == 1){
      decimal+= pow(2,count);
    }
    ans = ans/10;
    count++;
  }

  cout << decimal << endl;
}