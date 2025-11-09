//Reverse a number ...

#include<iostream>

using namespace std;
int main() {
    int num, ld;
    cin>>num;
    while(num > 0){
        ld = num % 10;
        cout<< ld <<"";
        num = num / 10;
    }
    
    return 0;
}
