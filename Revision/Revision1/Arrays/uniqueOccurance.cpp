#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurance(int arr[], int size)
{

    int i = 0;
    vector<int> ans;
    sort(arr, arr + size);

    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        i = i + count;
        ans.push_back(count);
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == ans[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int arr[6] = {1, 2, 2, 1, 1, 3};

    int arr2[10] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    bool first = uniqueOccurance(arr, 6);
    bool second = uniqueOccurance(arr2, 10);

    cout << "For first array -> " << first << endl;
    cout << "For second array -> " << second << endl;
}