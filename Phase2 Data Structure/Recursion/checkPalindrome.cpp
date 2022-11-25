#include<iostream>
using namespace std;

bool isPalindrome(string str, int i){

  if(i == str.size()-1){
    return true;
  }

  if(str[i] != str[str.length()-i-1]){
    return false;
  }

  i++;
  return isPalindrome(str,i);
}

int main() { 


  string str = "abbbbbba";

  bool ifYes = isPalindrome(str,0);

  if(ifYes){
    cout<< "Palindrome" << endl;
  } else{
    cout << "Not Palindrome" << endl;
  }
}