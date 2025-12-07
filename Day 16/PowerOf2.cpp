#include<iostream>
#include<string>
using namespace std;

bool CheckPowerof2(int num){
    if(!(num & (num-1))){
        return true;
    } else {
        return false;
    }
     
}
    

int main (){
    cout << CheckPowerof2(32)<< endl;
    
    return 0;
}