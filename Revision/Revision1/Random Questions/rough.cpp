#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int ans = 0;
    int x = -123;

    while(x!=0){
        int digit = x % 10;
        if((ans < INT64_MIN/10) || (ans> INT64_MAX/10)){
            return 0;
        }
        ans = (10 * ans) + digit;
        x = x / 10;
    }

    cout << ans;
}