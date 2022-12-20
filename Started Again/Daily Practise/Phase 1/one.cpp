#include<iostream>
#include<math.h>
using namespace std;

int binaryConversion(int number){
  int answer = 0;
  int i = 0;
  while(number != 0){
    int bit = number&1;
    answer = (bit*pow(10,i)) + answer;
    i+=1;
    number = number >> 1;
  }

  return answer;
}

int main() {
  int n = 10;
  int bitIs = binaryConversion(n);
  cout << bitIs << endl;

}