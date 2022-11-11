// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

int twoscomplement(int number)
{

    int answer = 0;
    int i = 0;
    bool ifOne = false;

    while (number != 0)
    {
        int bit = (number & 1);

        if (bit == 1 and ifOne == false)
        {
            answer = (bit * pow(10, i)) + answer;
            ifOne = true;
        }

        else if (ifOne == true)
        {
            if (bit == 0)
            {
                bit = 1;
                answer = (bit * pow(10, i)) + answer;
            }
            else
            {
                bit = 0;
                answer = (bit * pow(10, i)) + answer;
            }
        }

        else
        {
            answer = (bit * pow(10, i)) + answer;
        }

        number = (number >> 1);
        i++;
    }
    return answer;
}

int main()
{

    int onescomp = 12;

    int twoscomp = twoscomplement(onescomp);

    cout << twoscomp;
}