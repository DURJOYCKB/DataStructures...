#include<iostream>
#include<string>
using namespace std;

class Complex {
    int real, img;
    public :
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void showNum(){
            cout << real << " + " << img << "i\n";
        }
        //Operator Overloading...
        void operator + (Complex &c2){
            int resultReal = this->real + c2.real;
            int resultImg = this->img + c2.img;
            Complex c3(resultReal, resultImg);
            cout << "result = ";
            c3.showNum();
        }
};

int main(){
    Complex c1(3, 4);
    Complex c2(2, 5);

    c1.showNum();
    c2.showNum();

    c1 + c2;
    return 0;
}