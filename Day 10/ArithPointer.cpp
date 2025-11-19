#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout<< ptr << endl;
    cout<< (ptr + 1) << endl;

    return 0;
}