//Create stack using vector...
 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
class Stack{
    vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isempty()){
            cout << "Stack is empty\n";
            return ;
        }
        vec.pop_back();
    }

    T top(){
        //  if(isempty()){
        //     cout << "Stack is empty\n";
        //     return -1;
        // }
        int lastidx = vec.size()-1;
        return vec[lastidx];
    }

    bool isempty(){
        return vec.size() == 0;
    }
};

int main(){

    Stack<string> s;

    s.push("Win");
    s.push("Will");
    s.push("I");

    while(!s.isempty()){
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;

    return 0;
}