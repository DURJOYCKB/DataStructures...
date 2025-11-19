//Reverse An Array without Extra Space....

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

    int start = 0, end = n-1;
    while(start< end){
        //swap..
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    Array(arr, n);
    
    cout << endl;

    return 0;
}








