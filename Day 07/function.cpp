#include<iostream>

using namespace std;
void  tellHello() {
    cout<<"Hello Everyone!!!" << endl;
}

void  sayHello() {
    tellHello();    // Function call inside another function..
    cout<<"Work done...." << endl;
    tellHello(); 
}

int main(){
    sayHello();     // Funtion call..
    
    return 0;
}