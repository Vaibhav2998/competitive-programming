#include<iostream>
#include<math.h>
using namespace std;

char flip(char c) { return (c=='0') ? '1':'0';}

string binaryConverstion(int number){
  int ans = 0;
  int i = 0;
  while(number!=0){
    int bit  = number&1;
    ans = (bit*pow(10,i)) + ans;
    i++;
    number = number >> 1;
    }

  return to_string(ans);
}

int main() {

  int number = 7;
  string binary = binaryConverstion(number);
  

  string ones = "";
  string twos = "";


  for(int i=0; i<binary.length(); i++){
    ones += flip(binary[i]);
  }

  cout << binary << endl;
  cout << ones << endl;
  twos = ones;
  int i;
  for(i = ones.length()-1; i>=0;i--){
    if(ones[i] == '1'){
      twos[i] = '0';
    }

    else if(ones[i] == '0'){
      twos[i] = '1';
      break;
    }
  }

  if(i == -1){
    twos = '1' + twos;
  }
  cout << i << endl;

  cout << twos << endl;
}