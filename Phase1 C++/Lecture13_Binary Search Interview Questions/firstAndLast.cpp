#include <iostream>
using namespace std;

int lastOcc(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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

int firstOcc(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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

    int answer = firstOcc(arr, 8, 0);
    int answer1 = firstOcc(arr, 8, 1);
    int answer2 = firstOcc(arr, 8, 2);

    cout << "First Occurance: " << endl;
    cout << answer << endl;
    cout << answer1 << endl;
    cout << answer2 << endl;

    int answer3 = lastOcc(arr, 8, 0);
    int answer4 = lastOcc(arr, 8, 1);
    int answer5 = lastOcc(arr, 8, 2);

    cout << "Last Occurance: " << endl;
    cout << answer3 << endl;
    cout << answer4 << endl;
    cout << answer5 << endl;
}