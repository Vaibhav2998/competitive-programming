#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int start = 0;
    int end = x;

    int mid = start + (end - start) / 2;

    if (x == 0)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }

    while (start < end)
    {
        if (mid == x / mid)
        {
            return mid;
        }
        else if (mid > (x / mid))
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return start - 1;
}

double precision(int n, int pre, int sq)
{

    double factor = 1;
    double ans = sq;

    for (int i = 0; i < pre; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    cout << "Finding SQRT: " << endl;

    int sqrt = mySqrt(13);
    double pre = precision(13,3,3);

    cout<< sqrt  << " with precision " << pre;
}