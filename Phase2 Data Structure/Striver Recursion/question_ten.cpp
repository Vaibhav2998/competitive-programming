#include<iostream>
using namespace std;

bool checkPalindrome(string str, int index){
  cout<< "Index is: " << index << endl;
  if(index >= str.size()/2){
    cout<< "Inside IF Index is: " << index << endl;
    return true;
  }

  if( str[index] != str[str.size()-index-1] ){
    return false;
  }

  return checkPalindrome(str, index+1);
}

int main() {

  string str = "noon";

  bool ans = checkPalindrome(str,0);

  cout << ans << endl;
}