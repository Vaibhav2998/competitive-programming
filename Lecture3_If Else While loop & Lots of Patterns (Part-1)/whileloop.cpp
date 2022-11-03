#include<iostream>
using namespace std;

int main() {

    /*
    // While loop Start

    // Printing n numbers using while loop

    int n;
    cout << "Enter number to print" << endl;
    cin >> n;
    cout << "Printing Values: ";
    int start = 1;

    while (start <= n){
        cout  << start << " ";
        start += 1;
    }

    // Printing sum of n numbers

    int sum = 0;
    start = 1;
    while (start <= n){
        sum = sum + start;
        start +=1;
    }

    cout << "Sum of values is: " << sum << endl;
*/

// Question: Prime or not number

int number;
cout << "Enter a number: " << endl;
cin >> number;

int start = 2;

while (start < number){
    if (number%start == 0){
        cout << number << " is not a prime number" << endl;
        break;
    }
    start = start + 1;
}

}