#include <iostream>
using namespace std;

class MyClass {
    public:
    int myNumber;

    MyClass() {
        myNumber = 0;
        cout << "Default constructor is called" <<  endl;
    }
};

int main() {
    MyClass obj;// default constructor is called
    cout << "myNumber: " << obj.myNumber << endl;
    return 0;
}