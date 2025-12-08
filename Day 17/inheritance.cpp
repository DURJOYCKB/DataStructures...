#include<iostream>
#include<string>
using namespace std;

class Animal {
public :
    string color;

    void eat(){
        cout << "Eats\n";
    }
    void breath(){
        cout << "Breath\n";
    }

};

class Fish : public Animal {
public :
    int fins;

    void swim(){
        cout << "Swims\n";
    }
   

};

int main (){

    Fish f1;
    f1.color = "Blue";
    cout << f1.color << endl;
    f1.eat();
    f1.breath();
    return 0;

}