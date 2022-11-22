#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[10] = {1, 3, 4, 5, 6, 7, 8, 9};

    printArray(arr, 10);
}