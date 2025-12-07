#include<iostream>
#include<string>
using namespace std;

int GetithBit(int num, int i){
    int bitmask = 1 << i;
    if(!(num & bitmask)){
        return 0;
    } else {
        return 1;
    }
}

int main (){
    cout << GetithBit(6, 2)<< endl;
    cout << GetithBit(7, 5)<< endl;
    return 0;
}