#include <iostream>
#include <math.h>
using namespace std;

int flip(int number)
{
    int mask = 0;
    int m = number;

    if (number == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = ((mask << 1) | 1);
        m = m >> 1;
    }

    cout << "mask is: " << mask << endl;

    int answer = (~number) & (mask);
    return answer;
}

int main()
{

    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    int fliping = flip(number);

    cout << "One's compliment is: " << fliping << endl;
}