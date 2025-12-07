#include<iostream>
#include<string>
using namespace std;

int ClearithBit(int num, int i){
    int bitmask = ~(1 << i);
     return (num & bitmask);
}
    

int main (){
    cout << ClearithBit(6, 1)<< endl;
    
    return 0;
}