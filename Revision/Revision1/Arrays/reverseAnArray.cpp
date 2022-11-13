#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6]{1, 2, 3, 4, 5, 6};

    int arr2[5] = {6, 7, 8, 9, 0};

    reverse(arr, 6);
    reverse(arr2, 5);

    printArray(arr, 6);
    printArray(arr2, 5);
}