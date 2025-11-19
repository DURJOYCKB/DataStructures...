#include<iostream>

using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {16, 21, 3, 41, 55, 20, 10};
    int n  = sizeof(arr) / sizeof(int);

    cout<< linearSearch(arr, n, 55)<< endl;
    
    //cout << endl;

    return 0;
}