//Reverse An Array with Extra Space....

#include<iostream>

using namespace std;

void Array(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< ",";
    }
    cout<< endl;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n  = sizeof(arr) / sizeof(int);

    int copyArray[n];
    for(int i= 0; i<n ; i++){
        int j = n-i-1;
        copyArray[j] = arr[i];
    }
    for(int i = 0; i<n ;i++){
        arr[i]= copyArray[i];
    }

    Array(arr, n);
    
    cout << endl;

    return 0;
}