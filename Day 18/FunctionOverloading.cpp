#include<iostream>
#include<string>
using namespace std;

class Print{
    public :
    void show(int x){
        cout << "Int :" << x << endl;
    }
    void show(string str){
        cout << "String :" << str << endl;
    }

};
int main(){

    Print obj1;
    obj1.show("Durjoy Chakraborty");
    obj1.show(23);
    return 0;
}