#include<iostream>
#include<string>
using namespace std;

int FastExpo(int x, int n){
    int ans = 1;
   
    while(n > 0){
        int lastBit = n & 1;
        if(lastBit){
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }
    
    cout << ans << endl;
    return ans;
}
    

int main (){
    
    FastExpo(3, 5);

    
    return 0;
}