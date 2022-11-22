#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter a number to check for prime: " << endl;
    cin >> number;
    bool isPrime = 1;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {

            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << number << " is not a prime number";
    }
    else
    {
        cout << number << " is a prime number";
    }
}