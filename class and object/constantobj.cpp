#include <iostream>
using namespace std;

class MyClass {
    public:
    int myNumber;
    MyClass(int num) : myNumber(num) {}

    int getNumber() const {
        return myNumber;
    }
};

int main() {
    const MyClass obj(10);
    cout << "Number: " << obj.getNumber() << endl;

    return 0;
}