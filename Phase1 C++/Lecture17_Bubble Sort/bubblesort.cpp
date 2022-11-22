#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{

    bool isSwap = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (isSwap == false)
        {
            break;
        }
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

    int arr[5] = {2, 1, 5, 4, 0};

    bubbleSort(arr, 5);
    printArray(arr, 5);
}