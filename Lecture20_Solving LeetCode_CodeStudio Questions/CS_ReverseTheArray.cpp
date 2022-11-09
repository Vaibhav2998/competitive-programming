#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{

    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }

    return v;
}

void printArray(vector<int> arr)
{
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{

    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    printArray(v);

    vector<int> r = reverse(v);

    printArray(r);
}