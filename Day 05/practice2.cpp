#include<iostream>

using namespace std;
int main() {
    int num, sum = 0, ld;
    cin>>num;
    while(num > 0){
        ld = num % 10;
        sum += ld;
        num = num / 10;
    }
    cout<< "Sum of the digits :"<< sum << endl;
    return 0;
}