#include<iostream>
using namespace std;


int main() {
  
  int arr[3] = {1,23,30000};

  cout<<"Array 0 ka address from arr: " << arr << endl;
  cout<<"Array arr[0] ka value: " << arr[0] << endl;
  cout<<"Array ka address using &arr[0]: " << &arr[0] << endl;
  cout<<"Array ka address using &arr[1]: " << &arr[1] << endl;
  cout<<"Array ka address using &arr[2]: " << &arr[2] << endl;
  cout<<"Array ka address using &arr[3]: " << &arr[3] << endl;
  cout<<endl;
  cout<<"----------POINTERS IN ARRAY------------" << endl;
  cout<<endl;
  cout<<"*arr dereferencing the value at arr means first value: " << *arr << endl;
  cout<<"*arr+1: " << *arr + 1 << endl;
  cout<<"*arr+2: " << *arr + 2 << endl;
  cout<<"*arr+3: " << *arr + 3 << endl;
  cout<<"*(arr+1): " << *(arr + 1) << endl;
  cout<<"*(arr+3): " << *(arr + 3) << endl;

  cout<<"1. " << 1[arr] << endl;
  cout<<"2. " << *(1+arr) << endl;

  cout <<"size of array is: " << sizeof(arr) << endl;

}