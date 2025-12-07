#include<iostream>
#include<string>
using namespace std;

void ClearlastiBit(int num, int i){
    int bitmask = (~0) << i;
    num = num & bitmask;
    
    cout << num << endl;
}
    

int main (){
    
    ClearlastiBit(15, 2);

    
    return 0;
}