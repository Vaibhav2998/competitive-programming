#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter number: " << endl;
  cin >> n;

  int first = 0;
  int second = 1;

  cout << first << " " << second << " ";

  for(int i=3;i<=n;i++){
    int summ = first + second;
    cout << summ << " ";
    first = second;
    second = summ; 
  }
}