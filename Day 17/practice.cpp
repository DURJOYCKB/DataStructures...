#include<iostream>
#include<string>
using namespace std;

class User {
private:
    int id;
    string password;

public:
    string username;

    User(int id) {
        this->id = id;
    }

    string getPass(){
        return password;
    }

    void setPass(string password){
        this->password = password;
    }
};

int main(){

    User u1(8538);
    u1.username = "Durjoy Chakraborty";
    u1.setPass("durjoY");

    cout << "Username : "<< u1.username << endl;
    cout << "Password : "<< u1.getPass() << endl;  
    return 0;
}