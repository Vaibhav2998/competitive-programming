#include<iostream>
using namespace std;

void reverseString(string &str, int start, int end) {

  cout << "String is: " << str << ". Start: " << start <<". End: " << end << endl;

  if(start>end){
    return;
  }

  swap(str[start], str[end]);
  start++;
  end--;
  reverseString(str,start, end);
  cout << "After String is: " << str << ". Start: " << start <<". End: " << end << endl;

}

int main() {

  string str = "abcde";
  reverseString(str,0,4);
  cout<<"Inside main() "<< endl;
  cout << endl;
  cout <<"String is: " << str << endl; 

}