#include <iostream>
using namespace std;

void alternateSwap(int arr[], int size)
{

    for (int i = 0; i < size - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
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

    int arr_odd[5] = {1, 2, 3, 4, 5};

    int arr_even[6] = {1, 2, 3, 4, 5, 6};

    alternateSwap(arr_even, 6);
    alternateSwap(arr_odd, 5);

    printArray(arr_even, 6);
    printArray(arr_odd, 5);
}