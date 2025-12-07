#include<iostream>
#include<string>
using namespace std;

int CountBit(int num){
    int count = 0;
   
    while(num > 0){
        int lastdigit = num & 1;
        count += lastdigit;
        num = num >> 1;
    }
    
    cout << count << endl;
    return count;
}
    

int main (){
    
    CountBit(7);

    
    return 0;
}