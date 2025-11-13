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

void allPrimes(int n){
    for(int i=2;i<=n;i++){
        if(primeNumber(i)){
            cout<< i <<" ";
        }
    }
    cout << endl;
}


int main(){
    
    allPrimes(100);
    return 0;
    
}