#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
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

    int arr1[7] = {1, 2, 3, 4, 5, 98, 1000};
    int arr2[6] = {1, 2, 3, 4, 5, 6};

    swapAlternate(arr1, 7);
    swapAlternate(arr2, 6);

    printArray(arr1, 7);
    printArray(arr2, 6);
}