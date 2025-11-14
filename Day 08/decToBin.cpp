#include<iostream>

using namespace std;

void decToBin(int decNum){
    int n = decNum;
    int binNum = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n % 2;
        binNum += rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout<<"Binery of "<< decNum<< " = " << binNum << endl;
}

int main(){
    decToBin(4);
    return 0;
}