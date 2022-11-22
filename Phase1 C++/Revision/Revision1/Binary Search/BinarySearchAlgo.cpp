#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int search)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] > search)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[5] = {23, 12, 65, 33, 89};

    int ans = binarySearch(arr, 5, 23);

    cout << ans;
}