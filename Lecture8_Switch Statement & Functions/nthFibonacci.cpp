#include <iostream>
using namespace std;

int fibonacci(int n)
{

    int first = 0;
    int second = 1;

    for (int i = 1; i < n; i++)
    {
        int sum = first + second;
        first = second;
        second = sum;
    }

    return first;
}

int main()
{

    int fib;
    cout << "Enter number: " << endl;
    cin >> fib;

    int ans = fibonacci(fib);

    cout << ans;
}