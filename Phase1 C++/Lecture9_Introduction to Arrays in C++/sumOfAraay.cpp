#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{

    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    cout << "Enter element in array: " << endl;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int arraySum = sumOfArray(arr, size);

    cout << "Sum of Array is: " << arraySum << endl;
}