#include<iostream>

using namespace std;

int sum(int a , int b){
    cout<< (a + b)<< endl;
    return a + b;
}

double sum(double a , double b){
    cout<< (a + b)<< endl;
    return a + b;
}

int sum(int a , int b, int c){
   cout<< (a + b + c)<< endl; 
    return a + b + c;
}

int main() {
    sum(4, 3);
    sum(1.5 , 3.5);
    sum(3, 6, 9);

    return 0;
}