 
#include <iostream>
#include <string>
#include <list>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int x){
    if(!s.empty()){
        s.push(x);
        return;
    }

    int top = s.top();
    s.pop();

    pushAtBottom(s, x);

    s.push(top);
}

int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    pushAtBottom(s, 4);

    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
