#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){

    int start = 0;
    int last = size-1;

    int mid = start + (last-start)/2;
    int answer = -1;


    while(start<=last){
        if(arr[mid] ==  key){
            last = mid-1;
            answer = mid;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else{
            last = mid -1;
        }
        mid = start + (last-start)/2;
    }

    return answer;
}

int lastOccurance(int arr[], int size, int key){

    int start = 0;
    int last = size-1;

    int mid = start + (last-start)/2;
    int answer = -1;


    while(start<=last){
        if(arr[mid] ==  key){
            start = mid+1;
            answer = mid;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else{
            last = mid -1;
        }
        mid = start + (last-start)/2;
    }

    return answer;
}

int main() {
    
    int arr1[6] = {0, 5 ,5 ,6, 6, 6};

    int arr2[8] = {0, 0 ,1, 1, 2, 2, 2, 2};

    int arr3[4] = {0, 0, 0, 0};

    int arr4[1] = {2};

    int first1 = firstOccurance(arr1, 6, 3);
    int first2 = firstOccurance(arr2, 8, 2);
    int first3 = firstOccurance(arr3, 4, 0);
    int first4 = firstOccurance(arr4, 1, 2);

    int last1 = lastOccurance(arr1, 6, 3);
    int last2 = lastOccurance(arr2, 8, 2);
    int last3 = lastOccurance(arr3, 4, 0);
    int last4 = lastOccurance(arr4, 1, 2);

    cout<< "First: " << first1 << " " << last1 << endl;
    cout<< "Second: " << first2 << " " << last2 << endl;
    cout<< "Third: " << first3 << " " << last3<< endl;
    cout<< "Fourth: " << first4 << " " << last4<< endl;


}