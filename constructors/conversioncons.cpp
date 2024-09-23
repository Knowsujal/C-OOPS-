#include <iostream>
using namespace std;

class Complex {
    private:
    float real;
    float imag;

    public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex(double realPart) : real(realPart), imag(0) {}

    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
};
int main(){
    Complex C1 = 3.0;
    C1.display();
    return 0;
}