#include <iostream>
using namespace std;

class MyClass {
    public:
    int*ptr;
//Constructor
    MyClass(int val) {
        ptr = new int(val);
        cout << "Constructor called" << endl;
    }
//Destructor
    ~MyClass() {
        delete ptr;
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj(10); //Constructor is called here and Destructor will be called when obj goes out of scope
    return 0;
}