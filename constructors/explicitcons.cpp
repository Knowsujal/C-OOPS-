#include <iostream>
using namespace std;

class Complex {
    private: 
    float real;
    float imag;
     public:
     explicit Complex(float r = 0, float i = 0) : real(r), imag(i) {}

     void display() const {
        cout << real << " + " << imag << "i" << endl;
     }
};
int main(){
    Complex c(3.5);
    c.display();
    return 0;
}