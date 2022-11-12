#include <iostream>
using namespace std;

int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((ans < INT64_MIN / 10) || (ans > INT64_MAX / 10))
        {
            return 0;
        }
        ans = (10 * ans) + digit;
        x = x / 10;
    }
    return ans;
}

int main()
{

    int number;
    cout << "Enter a number to reverse: " << endl;
    cin >> number;

    int rev = reverse(number);

    cout << "Reversed number is: " << rev << endl;
}