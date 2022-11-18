#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{

    int i = 1;

    while (i < size)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            if (temp < arr[j])
            {
                
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
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
    cout << "Before Insertion Sort: " << endl;
    printArray(arr, 6);
    cout << "After Insertion Sort: " << endl;
    insertionSort(arr, 6);
    printArray(arr, 6);
}