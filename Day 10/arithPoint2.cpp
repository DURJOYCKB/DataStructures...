#include<iostream>

using namespace std;

void printArr( int *ptr, int len){
    for(int i = 0 ; i<len; i++){
        cout << *(ptr + i) << "\n";
        //ptr = ptr + 1;
    }
}



int main() {
    int marks[5] = {1, 2, 3, 4, 5};
    int len  = sizeof(marks) / sizeof(int);

    printArr(marks, len);
    return 0;
}