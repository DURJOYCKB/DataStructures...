#include<iostream>
#include<string>
#include<vector>
using namespace std;

int search(int arr[], int si, int ei, int target){

    if(si > ei){
        return -1;
    }
    int mid = si + (ei - si) /2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[si] <= arr[mid]){                             //Line 1..
        if(arr[si]<= target && target <= arr[mid]){
            return search(arr, si, mid-1, target);      //Left half..
        } else {
            return search(arr, mid+1, ei, target);      //Right half..
        }
    } else {                                             //Line 2..
        if(arr[mid] <= target && target <= arr[ei]){
            return search(arr, mid+1, ei, target);      //Right half..
        } else {
            return search(arr, mid+1, ei, target);      // Left half..
        }
    }
   
}


int main(){
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout << "Idx value : "<< search(arr, 0, n-1, 0) << endl;

    
    return 0;
}