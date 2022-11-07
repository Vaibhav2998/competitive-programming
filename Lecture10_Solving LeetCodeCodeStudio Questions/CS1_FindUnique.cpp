int findUnique(int *arr, int size)
{
    int answer = 0;
    for(int i=0; i<size; i++){
        answer = arr[i]^answer;
    }
    return answer;
}