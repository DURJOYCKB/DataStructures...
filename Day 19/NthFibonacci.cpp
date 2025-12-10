#include<iostream>
#include<string>
using namespace std;

int Fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    cout<< Fibonacci(2) << " ";
    cout<< Fibonacci(3) << " ";
    cout<< Fibonacci(4) << " ";
    cout<< Fibonacci(5) << " ";
    cout<< Fibonacci(6) << " ";
    cout<< Fibonacci(7) << " ";
    cout<< Fibonacci(8) << " ";
    return 0;
}