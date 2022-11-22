#include <iostream>
using namespace std;

int arithmaticProgression(int n)
{

    return (3 * n + 7);
}

int main()
{

    int num;
    cout << "Enter a number: " << endl;

    cin >> num;

    int answer = arithmaticProgression(num);

    cout << "Arithmatic progression is: " << answer << endl;
}