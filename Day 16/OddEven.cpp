#include<iostream>
#include<string>
using namespace std;

void OddorEven(int n){
    if(!(n & 1)){
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
}

int main (){
    OddorEven(5);
    OddorEven(8);
    return 0;
}