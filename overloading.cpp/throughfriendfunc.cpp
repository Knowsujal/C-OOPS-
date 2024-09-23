#include <iostream>
using namespace std;

class Complex {
    private:
    int real;
    int imag;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    Complex add (Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.imag = imag + x.imag;
        return temp;
    }
    void Display(){
        cout << real << "+i" << imag << endl;
    }
};
int main(){
    Complex C1 (3, 7);
    C1.Display();
    Complex C2 (5, 2);
    C2.Display();
    Complex C3;
    C3 = C1.add (C2);
    C3.Display();
}