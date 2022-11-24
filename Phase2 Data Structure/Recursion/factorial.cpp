#include<iostream>
using namespace std;

int factorial(int n){

  //base case
  if(n == 0){
    return 1;
  }

  int chotaProblem = factorial(n-1);
  int badeProblem = n * chotaProblem;

  return badeProblem;
}


int main() {

  int n;
  cout<<"Enter a number for factorial: " << endl;
  cin >> n;


  int answer = factorial(n);

  cout << "Factorial is: " << answer << endl;

}