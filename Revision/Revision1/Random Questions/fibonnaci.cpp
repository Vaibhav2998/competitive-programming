#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";

    for (int i = 2; i < number; i++)
    {
        int sum = first + second;
        cout << sum << " ";
        first = second;
        second = sum;
    }
}