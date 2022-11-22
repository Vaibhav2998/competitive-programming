#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{

    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};

    cout << arr;
}