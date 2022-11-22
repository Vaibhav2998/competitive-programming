#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int start = 1;
    while (start <= n)
    {
        // space print krlo

        int space = n - start;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        while (j <= start)
        {
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        start = start + 1;
    }
}