#include<iostream>
using namespace std;

char toLower(char ch){
    if(ch>='a' and ch<='z'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while(start<= end){
        
        if(toLower(s[start]) == toLower(s[end])){
            start++;
            end--;
        }

    }
}


int main() {

    cout << toLower('c');

}