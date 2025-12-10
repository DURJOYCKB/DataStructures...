#include<iostream>
#include<string>
using namespace std;

int Factorial (int n){
    if(n == 0){
        return 1;
    }
    return n * Factorial(n-1);
}

int main(){
    cout << Factorial(5)<< endl;
    cout << Factorial(6)<< endl;
    cout << Factorial(4)<< endl;
    return 0;
}