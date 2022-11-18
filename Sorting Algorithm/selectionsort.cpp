#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr = {6, 2, 8, 4, 10};
    cout << "Before Selection Sort: " << endl;
    printArray(arr);
    cout << "Before Selection Sort: " << endl;
    selectionSort(arr);
    printArray(arr);
}