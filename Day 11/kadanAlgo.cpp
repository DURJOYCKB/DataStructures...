#include<iostream>
using namespace std;

void SubArr(int *arr, int n){
    int maxsum= INT32_MIN;
    int currSum = 0;
    for(int i=0;i<n; i++){
        currSum += arr[i];
        maxsum = max(currSum, maxsum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<< "Max SubArray Sum = "<< maxsum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n =sizeof(arr)/sizeof(int);

    SubArr(arr, n);
    return 0;
}