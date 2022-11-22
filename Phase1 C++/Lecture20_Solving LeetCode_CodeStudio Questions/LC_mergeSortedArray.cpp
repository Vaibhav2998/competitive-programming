#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArray(vector<int> arr1, vector<int> arr2)
{
    int arr1_pointer = 0;
    int arr2_pointer = 0;

    vector<int> merged_array;

    while (arr1_pointer < arr1.size() && arr2_pointer < arr2.size())
    {

        if (arr1[arr1_pointer] <= arr2[arr2_pointer])
        {
            merged_array.push_back(arr1[arr1_pointer]);
            arr1_pointer++;
        }
        else
        {
            merged_array.push_back(arr2[arr2_pointer]);
            arr2_pointer++;
        }
    }

    while (arr1_pointer < arr1.size())
    {
        merged_array.push_back(arr1[arr1_pointer]);
        arr1_pointer++;
    }

    while (arr2_pointer < arr2.size())
    {
        merged_array.push_back(arr2[arr2_pointer]);
        arr2_pointer++;
    }

    return merged_array;
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

    vector<int> arr1;

    vector<int> arr2;

    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);
    arr1.push_back(9);

    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);

    cout << "Array before merging: " << endl;

    cout << "Array 1: " << endl;
    printArray(arr1);

    cout << "Array 2: " << endl;
    printArray(arr2);

    vector<int> ma = mergeArray(arr1, arr2);

    cout << "Array after merging: " << endl;

    cout << "Merged Array: " << endl;
    printArray(ma);
}