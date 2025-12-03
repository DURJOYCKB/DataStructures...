#include<iostream>
#include<cstring>

using namespace std;

bool palin(char str[], int n){
    int st = 0, end = n-1;
    while(st < end){
        if(str[st++] != str[end--]){
            cout<< "Not valid Palindrom\n";
            return false;
        }
    }
    cout<< "Valid Palindrom\n";
    return true;
}

int main() {
    char word[] = "racecar";

    palin(word, strlen(word));


    return 0;
}

