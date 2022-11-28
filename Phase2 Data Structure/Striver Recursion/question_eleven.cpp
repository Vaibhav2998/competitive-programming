#include<iostream>
using namespace std;

int fibonacci(int number){

  if(number == 0 || number == 1){
    return number;
  }

  return fibonacci(number-1) + fibonacci(number-2);
}

int main() {

  int n = 6;

  int ans = fibonacci(n);
  cout << ans << endl;

}