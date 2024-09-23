#include <iostream>
using namespace std;

class MyClass {
    public:
    int myNumber;

    MyClass(int num) : myNumber(num) {}

    MyClass(const MyClass& other) {
        myNumber = other.myNumber;
        cout << "Cop construtor called" << endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    cout << "obj2.myNumber: " << obj2.myNumber << endl;
    return 0;
}
