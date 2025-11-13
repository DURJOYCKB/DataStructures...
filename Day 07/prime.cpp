#include<iostream>

using namespace std;

bool primeNumber(int n){
    
    if(n == 1){
        return false;
    }
    for(int i = 2; i<=n-1; i++){
        if(n % i == 0){
            return false;
        } 
    }
    return true;
   
}

// bool primeNumber(int n){
    
//     if(n == 1){
//         return false;
//     }
//     for(int i = 2; i*i<=n; i++){
//         if(n % i == 0){
//             return false;
//         } 
//     }
//     return true;
   
// }


int main(){
    cout<< primeNumber(23) <<endl;
    
    return 0;
    
}