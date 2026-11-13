#include<iostream>

using namespace std;
void  tellHello() {
    cout<<"Hello Everyone!!!" << endl;
}

void  sayHello() {
    tellHello();
    cout<<"Work done...." << endl;
    tellHello();
}

int main(){
    sayHello();
    
    return 0;
}