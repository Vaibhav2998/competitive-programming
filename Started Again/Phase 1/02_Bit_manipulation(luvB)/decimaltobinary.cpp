#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int number = 11;
  int i = 0;
  int answer = 0;

  while(number !=0){
    int bit = number&1;
    cout << "Iteration " << i << ". " << bit << " answer is: ";
    answer = (bit * pow(10,i)) + answer;
    cout << answer << endl;
    i++;
    number = number>>1;
  }
}