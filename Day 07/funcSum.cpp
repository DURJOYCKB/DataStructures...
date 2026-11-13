#include<iostream>
using namespace std;

/* When the argument passing one only value,
    we cannot set the 1st parameter as default..
        We can set the 2nd parameter as default value only */

int sum(int a , int b) {        // a, b are parameters
    int sum = a + b;
    return sum;
}

int diff(int a , int b) {       // a, b are parameters
    int diff = a - b;
    return diff;
}

int main(){
    int s = sum(44, 66);            // 44, 66 are arguments
    cout<<"Sum = "<< s << endl;

    int d = diff(60, 40);           // 60, 40 are arguments
    cout<<"Difference = "<< d << endl;
    return 0;
}