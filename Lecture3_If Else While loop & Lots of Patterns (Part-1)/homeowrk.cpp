#include<iostream>
using namespace std;

int main() {

/*
// Question-1
    char ch;
    cout << "Enter input" << endl; 
    cin >> ch;

    if (ch >= 'a' and ch <= 'z'){
        cout << "character is lowercase" << endl;
    } else if (ch>='A' and ch <= 'Z'){
        cout << "character us uppercase" << endl;
    } else if (ch>='0' and ch<='9') {
        cout << "character entered is a number" << endl;
    }

    */

   // Question -2: sum of all even numbers

/*
   int number;
      cout << "Enter a number:" << endl;
   cin >> number;
   int start = 0;
   int sum = 0;

   while (start <= number){
    sum = sum + start;
    start = start + 2;
   }

   cout << "summ of all even number is: " << sum << endl;
*/


      // Question-3: Farehnite to celcius

      float f;
      cout << "Enter farehnite:" << endl;
      cin >> f;

      float c = ((f-32)*5)/9;

      cout << "Celsius is: " << c;



}