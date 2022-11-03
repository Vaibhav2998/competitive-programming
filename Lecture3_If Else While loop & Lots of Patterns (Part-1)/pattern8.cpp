#include <iostream>
using namespace std;

int main()
{

/*

//solution-1 with value variable 

    int n;
    cin >> n;

    int start = 1;

    while (start <= n)
    {
        int j = 1;
        int value = start;
        while (j <= start)
        {
            cout << value << " ";
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        start = start + 1;
    }

    */


// solution 2 without value variable

   int n;
    cin >> n;

    int start = 1;

    while (start <= n)
    {
        int j = 0;
        while (j < start)
        {
            cout << start+j << " ";
            j = j + 1;
        }
        cout << endl;
        start = start + 1;
    }
}