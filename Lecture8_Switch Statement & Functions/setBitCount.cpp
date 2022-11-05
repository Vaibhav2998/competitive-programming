#include <iostream>
#include <math.h>
using namespace std;

int setBitCount(int n)
{

    int count = 0;

    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
            count = count + 1;
        }

        n = n >> 1;
    }

    return count;
}

int main()
{

    int a, b;
    cin >> a >> b;

    int ans = setBitCount(a) + setBitCount(b);
    cout << ans;
}