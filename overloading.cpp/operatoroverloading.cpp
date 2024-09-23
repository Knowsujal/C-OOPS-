#include <iostream>
using namespace std;

class Complex {
    private:
    float real;
    float imag;

    public:

    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other,imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3.0, 4.0), c2(1.0, 2.0);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}