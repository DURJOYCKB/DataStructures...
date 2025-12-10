#include<iostream>
#include<string>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    int halfPow = Pow(x, n/2);
    int powSquare = halfPow * halfPow;
    
    if(n %2 != 0){
        return x * powSquare;
    }

    return powSquare;
}

int main(){
    cout << Pow(2, 10) << endl;
    cout << Pow(2, 5) << endl;
    cout << Pow(3, 5) << endl;
    return 0;
}