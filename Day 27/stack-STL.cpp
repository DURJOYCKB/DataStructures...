//Create stack using vector...
 
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <stack>
using namespace std;

template <class T>
class Stack{
    list<T> ll;
public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        if(empty()){
            cout << "Stack is empty\n";
            return ;
        }
        ll.pop_front();
    }

    T top(){
        return ll.front();
    }

    bool empty(){
        return ll.size() == 0;
    }
};

int main(){

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
