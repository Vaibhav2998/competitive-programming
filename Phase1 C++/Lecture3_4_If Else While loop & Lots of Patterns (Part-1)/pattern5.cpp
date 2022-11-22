#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int start = 1;
    int j_start = 1;

    while (start <= n)
    {
        int j = 1;
        
        while (j <= n)
        {
            cout <<j_start<< " ";
            j_start += 1;
            j = j + 1;
        }
        cout << endl;
        start = start + 1;
    }
}