#include<iostream>
using namespace std;

void SubArr(int *arr, int n){
    int maxsum= INT32_MIN;
    for(int start = 0;start< n; start++){
        int sum = 0;
        for(int end= start; end< n; end++){
            sum = sum + arr[end];
            cout<< sum <<" ,";
            maxsum = max(maxsum, sum);
        }
        cout << endl;
    }
    cout<< "Max SubArray Sum = "<< maxsum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n =sizeof(arr)/sizeof(int);

    SubArr(arr, n);
    return 0;
}