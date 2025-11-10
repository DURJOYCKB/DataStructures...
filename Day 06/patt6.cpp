#include<iostream>

using namespace std;
int main() {
    int i, j;
    
    for(i= 1;i<=4; i++){
        for(j= 1; j<=5; j++){
            if((i == 2|| i == 3) && (j == 2|| j == 3 || j == 4)){
                cout<< " "<<" ";
            } else{
                cout<< "*" <<" ";
            }
            
        }

        cout<< endl;
    }
    
    return 0;
}