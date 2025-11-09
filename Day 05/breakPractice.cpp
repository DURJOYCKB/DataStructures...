#include<iostream>

using namespace std;
int main() {
    int i ;
    do{
        cout<< "Enter number : ";
        cin>>i;
        if(i % 10 == 0){
            break;
        }
        cout<< i << endl;
        i++;
    } while(1 > 0);
    
    return 0;
}