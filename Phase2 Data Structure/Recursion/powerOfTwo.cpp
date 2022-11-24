#include<iostream>
#include<math.h>
using namespace std;


int powerTwo(int n){

  if (n == 0)
    return 1;
  

  return 2 * pow(2,n-1);
}


int main() {

  int n;
  cout << "Power of two: " << endl;
  cin >> n;

  int answer = powerTwo(n);

  cout << "Power of 2 is: " << answer << endl;
}