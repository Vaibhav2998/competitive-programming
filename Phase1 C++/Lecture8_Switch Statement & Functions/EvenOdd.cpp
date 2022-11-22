#include <iostream>
using namespace std;

bool isEven(int num)
{

    if (num & 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int number;
    cout << "Enter number: " << endl;

    cin >> number;

    int answer = isEven(number);

    cout << answer;
}