#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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

    int arr[6] = {6, 22, 2, 8, 4, 10};
    cout << "Before Bubble Sort: " << endl;
    printArray(arr, 6);
    cout << "After Bubble Sort: " << endl;
    bubbleSort(arr, 6);
    printArray(arr, 6);
}