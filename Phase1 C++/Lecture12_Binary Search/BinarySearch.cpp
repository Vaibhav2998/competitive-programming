#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = start + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr1[6] = {2, 4, 6, 8, 10, 12};
    int arr2[5] = {3, 8, 11, 14, 16};

    int answer = binarySearch(arr1, 10, 6);

    int answer2 = binarySearch(arr2, 300, 5);

    cout << "Index of 10 is: " << answer << endl;

    cout << "Index of 300 is: " << answer2 << endl;
}