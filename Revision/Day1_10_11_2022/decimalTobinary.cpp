#include <iostream>
#include <math.h>
using namespace std;

int decimalTobinary(int number)
{

    int answer = 0;
    int i = 0;
    while (number != 0)
    {
        int bit = (number & 1);

        answer = (bit * pow(10, i)) + answer;

        number = (number >> 1);
        i++;
    }
    return answer;
}

int main()
{

    int number = 6;
    int bitconversion = decimalTobinary(number);

    cout << bitconversion;
}