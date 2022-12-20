#include<iostream>
using namespace std;

char flip(char ch) { return (ch == '0'?'1':'0');}

int main() {

  string bi = "100100";
  string ones = "";
  string twos = "";

  for(int i=0;i<bi.size();i++){
    ones.push_back(flip(bi[i]));
  }

  cout << ones << endl;
}