#include<iostream>
using namespace std;

void update(int n){
  n++;
}

void update2(int& n){
  n++;
}

int main() {

  int i = 5;
  int& j = i;

  cout<<"Before i & j are: " << i << " " << j << endl;
  update(i);
  cout<<"After i & j are: " << i << " " << j << endl;

  cout<<endl;
  cout<<endl;

  cout<<"Before i & j are: " << i << " " << j << endl;
  update2(i);
  cout<<"After i & j are: " << i << " " << j << endl;


}