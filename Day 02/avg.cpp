#include<iostream>

using namespace std;
int main() {
    float math;
    float physics;
    float chemistry;
    cout<<"Enter marks of math: ";
    cin>>math;
    cout<<"Enter marks of physics: ";
    cin>>physics;
    cout<<"Enter marks of chemistry: ";
    cin>>chemistry;


    float avg = (math + physics + chemistry)/ 3;
    

    cout<<"Average = "<<avg<<endl;
    return 0;
}