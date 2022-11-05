#include <iostream>
using namespace std;

bool isPrime(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    bool ans = isPrime(num);

    if (ans == 0)
    {
        cout << num << " is not a Prime Number" << endl;
    }
    else
    {
        cout << num << " is a Prime Number" << endl;
    }
}