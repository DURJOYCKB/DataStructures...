#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int num, i, count=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(i= 2;i <= sqrt(num);i++){
        if(num % i == 0){
            count = 1;
            break;
    }
}
    if(count == 1){
            cout<<"Not a Prime Number."<<endl;
        } else {
            cout<< "Prime Number."<< endl;
        }
    
    return 0;
}