//Create stack using vector...
 
#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

template <class T>
class Stack{
    list<T> ll;
public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        if(isempty()){
            cout << "Stack is empty\n";
            return ;
        }
        ll.pop_front();
    }

    T top(){
        return ll.front();
    }

    bool isempty(){
        return ll.size() == 0;
    }
};

int main(){

    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;

    return 0;
}