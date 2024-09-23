#include <iostream>
using namespace std;

template <typename T>
class MyClass{
    public:
    T num1 = 5;
    T num2 = 6;
    void add() {
        cout << "Addition of num1 and num2: " << num1 + num2 << endl;
    }
};
int main() {
    MyClass<int> d;
    d.add();
    return 0;
}