#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "Not a prime number" << endl;
            return 0;
        }
    }
    cout << "Prime number" << endl;
    return 1;
}