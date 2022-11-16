#include <iostream>
using namespace std;

bool isPossibleSolution(int arr[], int size, int student, int mid)
{

    int studentCount = 1;
    int pageCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageCount + arr[i] <= mid)
        {
            pageCount += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > student || arr[i] > mid)
            {
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}

int binarySearch(int arr[], int size, int student)
{

    int start = 0;

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (isPossibleSolution(arr, size, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{

    int book[4] = {10, 20, 30, 40};
    int book2[4] = {5, 17, 100, 11};
    int book3[5] = {25, 46, 28, 49, 24};

    int minPage = binarySearch(book, 4, 2);
    int minPage2 = binarySearch(book2, 4, 4);
    int minPage3 = binarySearch(book3, 5, 4);

    cout << minPage << " " << minPage2 << " " << minPage3;
}