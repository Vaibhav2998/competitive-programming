#include<iostream>
using namespace std;

char getMaxOccCharacter(string s) {
  
  int arr[26] = {0};

  for(int i=0; i<s.length();i++){
    int number = s[i] - 'a';
    arr[number]++;
  }


  int maxi = -1;
  int ans = 0;
  for(int i=0;i<26;i++){
    if(arr[i] > maxi){
      ans = i;
      maxi = arr[i]; 
    }
  }

  return 'a' + ans;

}

int main() {
  string str;
  cout<<"Enter string: " << endl;
  cin>>str;

  cout<<"Maximum occurance is of char: " << getMaxOccCharacter(str) << endl;
}