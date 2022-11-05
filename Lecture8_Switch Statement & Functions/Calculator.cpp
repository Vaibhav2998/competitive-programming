#include <iostream>
using namespace std;

int main()
{

    int number1;
    cout << "Enter number 1: " << endl;
    cin >> number1;

    int number2;
    cout << "Enter number 2: " << endl;
    cin >> number2;

    char op;
    cout << "Enter the operation you want to perform: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (number1 + number2) << endl;
        break;

    case '-':
        cout << (number1 - number2) << endl;
        break;

    case '*':
        cout << (number1 * number2) << endl;
        break;

    case '/':
        cout << (number1 / number2) << endl;
        break;

    case '%':
        cout << number1 % number2 << endl;
        break;

    default:
        cout << "Enter a valid operator" << endl;
        break;
    }
}