#include<iostream>

using namespace std;
void  tellHello() {
    cout<<"Hello Everyone!!!!\n";
}

void  sayHello() {
    tellHello();
    cout<<"Work done....\n";
    tellHello();
}

int main(){
    sayHello();
    
    return 0;
}