#include<iostream>

using namespace std;
int main() {
    int day;
    cout<<"Enter day:"<<endl;
    cin>>day;

    switch(day){
        case 1 : cout<<"Monday" << endl;
                 break;
        
        case 2 : cout<<"Tuesday" << endl;
                 break;
        default : cout<<"Invalid" << endl;
    }
    
    
    return 0;
}