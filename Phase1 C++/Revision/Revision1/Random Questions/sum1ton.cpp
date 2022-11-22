#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    cout << "Sum of number is: " << sum << endl;
}