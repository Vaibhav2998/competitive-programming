#include <iostream>
using namespace std;

int fibonacci(int number)
{

    int firstnumber = 0;
    int secondnumber = 1;

    int sum = firstnumber + secondnumber;

    for (int i = 3; i <= number; i++)
    {
        firstnumber = secondnumber;
        secondnumber = sum;
        sum = firstnumber + secondnumber;
    }
    return secondnumber;
}

int main()
{

    int number;
    cout << "Enter the nth fibonaaci number you want: " << endl;
    cin >> number;
    int ans = fibonacci(number);
    cout << ans << endl;
}