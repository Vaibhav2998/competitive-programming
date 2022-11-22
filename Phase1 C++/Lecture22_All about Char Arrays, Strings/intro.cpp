#include <iostream>
using namespace std;

int length(char ch[])
{
    int count = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char ch[20];

    cout << "Enter you name: " << endl;
    cin >> ch;
    cout << "Your name is: " << ch << endl;

    int len = length(ch);

    cout << "Length of string is: " << len;
}