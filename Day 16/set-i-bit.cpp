#include<iostream>
#include<string>
using namespace std;

int SetithBit(int num, int i){
    int bitmask = 1 << i;
     return (num | bitmask);
}
    

int main (){
    cout << SetithBit(6, 3)<< endl;
    
    return 0;
}