#include<iostream>
using namespace std;

int main(){
    char word[50];
    //cin >> word;   //ignored after whitespace...

    cin.getline(word, 50);

    cout <<"You entered : "<< word << endl;
    return 0;
}