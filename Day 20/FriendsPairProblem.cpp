#include<iostream>
#include<string>
using namespace std;

int friendsPairProblem(int n) {
    if (n == 1 || n == 2){
        return n;
    }

    return friendsPairProblem(n-1) + (n-1) * friendsPairProblem(n-2);
}

int main (){
    cout << friendsPairProblem(3) << endl;
    cout << friendsPairProblem(4) << endl;
    
    return 0;
}