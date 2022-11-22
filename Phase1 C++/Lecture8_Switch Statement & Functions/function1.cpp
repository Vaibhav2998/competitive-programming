#include <iostream>
using namespace std;

int power()
{
    int num1, num2;

    cin >> num1 >> num2;

    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = num1 * ans;
    }

    return ans;
}

int main()
{

    int answer = power();

    cout << answer << endl;
}