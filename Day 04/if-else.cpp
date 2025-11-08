#include<iostream>

using namespace std;
int main() {
    int a;
    int b;
    cout<<"Enter a: ";
    cin>>a;
   
    if(a % 2 == 0){
        cout<<"a is an Even Number"<<endl;
    } else {
        cout<<"It's an Odd Number."<<endl;
    }

    
    return 0;
}