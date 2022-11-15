#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int k)
{

    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    cout<< start << " " << end << " " << mid << endl;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        cout<< start << " " << end << " " << mid << endl;
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if (arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{

    vector<int> arr = {2, 4, 5, 6, 8, 9, 1};

    int pivot1 = findPosition(arr, 7, 2);

    cout<<pivot1 <<endl;;

    int ans = binarySearch(arr, 0, pivot1-1, 2);

    

    cout<< ans;
}