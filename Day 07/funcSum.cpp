#include<iostream>

using namespace std;

int sum(int a , int b) {
    int sum = a + b;
    return sum;
}


int main(){
    int s = sum(44, 66);
    cout<<"Sum = "<< s << endl;
    return 0;
}