#include<iostream>
using namespace std;

int replacingFunction(int number, int replacethis, int replacewiwth){

    int mult = 1;
    int answer = 0;
    while(number != 0){
        int digit = number % 10;

        if (digit == replacethis){
            answer = replacewiwth*mult + answer;
        } else{
            answer = digit*mult + answer;
        }

        mult *= 10;
        number = number/10;
    }

    return answer;

}

int main(){

    int number = 546;

    int replacing = replacingFunction(number, 5, 9);

    cout<< replacing;

}