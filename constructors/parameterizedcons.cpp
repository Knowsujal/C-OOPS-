#include <iostream>
using namespace std;

class MyClass{
    public:
    int myNumber;

    MyClass(int num) {
        myNumber = num;
        cout << "Parameterized constructor called" << endl;
    }
};

int main() {
    MyClass obj(10);
    cout << "myNumber: " << obj.myNumber << endl;
    return 0;
}