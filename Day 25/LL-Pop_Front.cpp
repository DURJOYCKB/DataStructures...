#include<iostream>
#include<string>
using namespace std;

class Node {
public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    

    void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL\n" << endl;
    }

    
    void pop_front(){
        if( head == NULL){
            cout << "LL is empty\n" ;
        }
        Node* temp = head;
        head = head -> next;

        temp ->next = NULL;
    }
};


int main(){
    
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();

    ll.pop_front();
    ll.printList();
    return 0;

}
