#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void countSort(int *arr, int n){
    int freq[100000] ={0};
    int minVal= INT16_MAX, maxVal= INT16_MIN;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal= min(minVal, arr[i]);
        maxVal= max(maxVal, arr[i]);
    }

    for(int i= minVal,j=0;i<=maxVal;i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }

    }
    print(arr, n);
    cout << endl;
}



int main(){
    int arr[] = {3, 1, 9, 7, 1, 2, 4};
    int n =sizeof(arr)/sizeof(int);

    countSort(arr, n);
    return 0;
}