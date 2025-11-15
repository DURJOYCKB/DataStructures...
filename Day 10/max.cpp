#include<iostream>

using namespace std;

int main() {
    int marks[5] = {10, 2, 13, 4, 22};
    int len  = sizeof(marks) / sizeof(int);

    int max = marks[0];
    int min = marks[0];
    for(int i = 1; i<=len-1; i++){
        if(max < marks[i]){
            max = marks[i];
            
        }
        if(min > marks[i]){
            min = marks[i];
            
        }
    }
    cout <<"Max = "<< max << endl;
    cout <<"Min = "<< min << endl;

    return 0;
}