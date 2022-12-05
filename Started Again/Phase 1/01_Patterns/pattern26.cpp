#include<iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter a number: " << endl;
   cin >> n;

   int i = 0;
   while(i < n){
    int space = n-i-1;
    while(space){
      cout << " ";
      space--;
    }

    int j = 0;
    while(j<=i){
      cout << j + 1;
      j++;
    }

    int k = 0;
    while(k<i){
      cout << i-k;
      k++;
    }

    i++;
    cout <<  endl;
   }
}