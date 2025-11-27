#include<iostream>
using namespace std;

void Sort(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<",";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j= 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){     //arr[j] < arr[j+1]...for Decending sorting
                swap(arr[j], arr[j+1]);
            }
        }
    }
     Sort(arr, n);
}

int main(){
    int arr[5] = {5, 4, 1, 3, 2};
    int n =sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    return 0;
}