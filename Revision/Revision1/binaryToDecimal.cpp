#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int binary)
{
    int iteration = 0;
    int answer = 0;
    while (binary != 0)
    {
        int digit = (binary % 10);
        if (digit == 1)
        {
            answer = (answer + pow(2, iteration));
        }
        iteration++;
        binary = binary / 10;
    }
    return answer;
}

int main()
{

    int binary;
    cout << "Enter a binary number: " << endl;
    cin >> binary;

    int answer = binaryToDecimal(binary);

    cout << "Decimal for this binary is: " << answer << endl;
}