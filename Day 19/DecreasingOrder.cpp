#include<iostream>
#include<string>
using namespace std;

void Print (int n){
    if(n == 0){
        return;
    }
    cout << n << " ";        //Decreasing Order.....
    Print (n-1);

    
    // Print (n-1);          //Increasing order.....
    // cout << n << " ";
    
}

int main(){
    Print(5);
   
    return 0;
}