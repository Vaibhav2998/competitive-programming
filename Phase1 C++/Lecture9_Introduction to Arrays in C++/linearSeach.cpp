#include <iostream>
using namespace std;

bool search(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {12, 33, 44, 25, 12, -8, -3, 12, 100, -6666};

    int element;
    cout << "Enter the element to search: ";
    cin >> element;

    int found = search(arr, 10, element);

    if (found)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }
}