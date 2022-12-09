#include<iostream>
#include<math.h>
using namespace std;

int main() {

  int x = 123;
  int answer = 0;
  int i = 0;
  while(x!=0){
    int digit = x%10;
    answer = (answer*10) + digit;
    x = x/10;
    i++;
  }

  cout << answer << endl;
}