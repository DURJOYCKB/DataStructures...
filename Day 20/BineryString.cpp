#include<iostream>
#include<string>
using namespace std;

void bineryString(int n, int lastPlace, string str){
    if(n == 0){
        cout << str << endl;
        return;
    }

    if(lastPlace != 1){
        bineryString(n-1, 0, str +'0');
        bineryString(n-1, 1, str +'1');
    } else {
        bineryString(n-1, 0, str +'0');
    }
}
int main(){
    string str ="";
    bineryString(3, 0, str);
    return 0;
}