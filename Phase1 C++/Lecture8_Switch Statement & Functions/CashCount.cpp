#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter the Amount: " << endl;
    cin >> amount;

    int hundred, fifty, twenty, one;

    switch (1)
    {

    case 1:
        hundred = amount / 100;
        if (hundred != 0)
        {
            amount = amount - (hundred * 100);
            cout << "Hundred: " << hundred << endl;
        }

    case 2:
        fifty = amount / 50;
        if (fifty != 0)
        {
            amount = amount - (fifty * 50);
            cout << "fifty: " << fifty << endl;
        }

    case 3:
        twenty = amount / 20;
        if (twenty != 0)
        {
            amount = amount - (twenty * 20);
            cout << "twenty: " << twenty << endl;
        }

    case 4:
        one = amount / 1;
        if (one != 0)
        {
            amount = amount - (one * 1);
            cout << "one: " << one << endl;
        }
    }
}