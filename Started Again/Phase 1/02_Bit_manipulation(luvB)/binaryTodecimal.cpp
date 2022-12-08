#include<iostream>
#include<math.h>
using namespace std;

int main() { 
  int binary = 10101;

  int count = 0;
  int answer = 0;
  while(binary !=0){
    int digit = binary%10;
    if(digit == 1){
      answer += pow(2,count);
    }
    binary = binary/10;
    count++;
  }

  cout << answer << endl;
}