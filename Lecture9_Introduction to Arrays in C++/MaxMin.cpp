#include <iostream>
using namespace std;

int maxElement(int arr[], int size)
{

    int max = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int minElement(int arr[], int size)
{

    int min = INT8_MAX;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int size;
    cin >> size;

    int arr[100];

    cout << "Enter Values in array : " << endl;

    // taking input for array

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum element is: " << maxElement(arr, size) << endl;

    cout << "Minimum element is: " << minElement(arr, size) << endl;
}