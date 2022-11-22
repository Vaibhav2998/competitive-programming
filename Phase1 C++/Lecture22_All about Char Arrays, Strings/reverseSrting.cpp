#include <iostream>
using namespace std;

void reverseString(char ch[], int size)
{
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(ch[start++], ch[end--]);
    }
}

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

    char name[20];

    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "Your name is: " << name << endl;
    int len = length(name);
    reverseString(name, len);
    cout << "After reversing your name is: " << name;
}