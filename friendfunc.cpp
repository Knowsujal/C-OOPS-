#include <iostream>
using namespace std;

class MyClass {
    private:
    int myNumber;
    public:
    MyClass(int num) : myNumber(num) {}
    //Friend function declaration
    friend void showNumber(MyClass obj);

};
//Friend function declaration
void showNumber(MyClass obj) {
    cout << "The nuber is : " << obj.myNumber << endl;
}

int main() {
    MyClass obj(10);
    showNumber(obj);
    return 0;
} 