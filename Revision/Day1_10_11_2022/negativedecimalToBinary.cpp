#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int number){

    int answer = 0;
    int i = 0;

    while(number !=0 ){
        int bit = (number&1);
        answer = (bit*pow(10,i)) + answer;

        number = (number >> 1);
        i++;
    }
    return answer;
}


int onsscompliment(int binary){
    int ans = 0;
    int i = 0;
    while (binary != 0){
        int bit = binary&1;
        if(bit == 0){
            bit = 1;
            ans = (bit*pow(10,i)) + ans;
        } else{
            bit = 0;
            ans = (bit*pow(10,i)) + ans;
        }

        binary = binary >> 1;
        i++;
    }

int twos = ans;

if(twos&1 == 1){
    
}

}





int main(){

    int num = 8;

    int binary = decimalToBinary(num);

    int negative = onsscompliment(binary);

    cout << binary << endl;
    cout << negative << endl;

}