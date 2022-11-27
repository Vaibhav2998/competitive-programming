#include<iostream>
using namespace std;

int count = 0;

void printname() {
  if(count == 5){
    return;
  }
  count++;
  cout << count << ". Vaibhav" << endl;
  printname();
}

int main() {
  printname();
}