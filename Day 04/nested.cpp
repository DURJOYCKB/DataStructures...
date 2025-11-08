#include<iostream>

using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a>=b && a>=c){
        cout<<"Largest is :"<< a <<endl;
    } else if(b>=a && b>=c) {
        cout<<"Largest is :"<< b <<endl;
    } else {
        cout<<"Largest is :"<< c <<endl;
    }
    return 0;
}