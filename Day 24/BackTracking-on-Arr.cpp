#include<iostream>
#include<string>
using namespace std;

void printArr(int arr[], int n){
    for(int i= 0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void ChangeArr(int arr[], int n, int i){
    if(i == n){
        printArr(arr, n);
        return ;
    }
    arr[i] = i+1;
    ChangeArr(arr, n, i+1);
    arr[i] -= 2;             //Backtracking...

}

int main(){
    int arr[5] = {0};
    int n = 5;
    ChangeArr(arr, n, 0);
    printArr(arr, n);
    return 0;
}