#include<iostream>
using namespace std;

bool poweroftwo(int number){
    int count = 0;
    while(number != 0){
        int bit = number&1;
        if (bit == 1){
            count += 1;
        }

        number = number >> 1;
    }

    if(count == 1){
        return true;
    } else{
        return false;
    }
}


int main(){

    int number = 66;

    bool ans = poweroftwo(number);

    cout << number << " is power if two -> " << ans << endl;
}