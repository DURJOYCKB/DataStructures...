#include<iostream>
#include<string>
using namespace std;

class Students {
    string name;
public:

    float cgpa;
    void parcentage(){
        cout << (cgpa * 10) << "%\n";
    }

    //setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

     //getters
    string getName(){
        return name;
    }
    float getCgpa(){
         return cgpa; 
    }
};

int main(){

    Students s1;
    s1.setName("Durjoy");
    s1.setCgpa(9.2);



    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    return 0;
}