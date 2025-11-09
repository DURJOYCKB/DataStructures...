//Reverse a given number without separating the digits...

#include<iostream>

using namespace std;
int main() {
    int num, rev = 0, ld;
    cin>>num;
    while(num > 0){
        ld = num % 10;
        rev = rev * 10 + ld;
        num = num / 10;
    }
    cout<< "Reverse of the digits :"<< rev << endl;
    return 0;
}
