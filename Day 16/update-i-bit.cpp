#include<iostream>
#include<string>
using namespace std;

void updateithBit(int num, int i, int val){
    num = num & ~(1 << i);

    num = num | (val << i);
    
    cout << num << endl;
}
    

int main (){
    updateithBit(7, 2, 0);
    updateithBit(7, 3, 1);

    
    return 0;
}