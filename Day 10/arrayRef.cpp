#include<iostream>

using namespace std;

void pointerArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< ",";
    }
    cout<< endl;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n  = sizeof(arr) / sizeof(int);

    pointerArray(arr, n);
    
    cout << endl;

    return 0;
}