#include <iostream>
using namespace std;

int countSeTBit(int number)
{
    int count = 0;
    while (number != 0)
    {
        int bit = number & 1;
        if (bit == 1)
        {
            count += 1;
        }
        number = number >> 1;
    }
    return count;
}

int main()
{

    int num1, num2;
    cout << "Enter number 1 and 2: " << endl;
    cin >> num1 >> num2;

    cout << "Number 1 is: " << num1 << endl;
    cout << "Number 2 is: " << num2 << endl;

    int count1 = countSeTBit(num1);
    int count2 = countSeTBit(num2);

    cout << "Set bit in number 1 is: " << count1 << endl;
    cout << "Set bit in number 2 is: " << count2 << endl;

    int sum = count1 + count2;

    cout << "Total number of set bit in number1 and number 2 is: " << sum << endl;
}