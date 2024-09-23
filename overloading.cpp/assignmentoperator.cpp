#include <iostream>
using namespace std;

class MyClass {
    private:
    int*data;

    public:

    MyClass(int value) {
        data = new int(value);
    }

    ~MyClass() {
        delete data;
    }

    MyClass(const MyClass& other){
        data = new int(*other.data);
    }

    MyClass& operator = (const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }
    void display() const {
        cout << *data << endl;
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    obj2 = obj1; //Overloaded assignment operator is used here
    obj2.display();
    return 0;
}