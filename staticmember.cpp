#include <iostream>
using namespace std;

class MyClaas{
    public: 
    static int staticVar;
    int MyClass() {
        staticVar++;
    }
    static void stticFuncton() {
        cout << "Static function called. StaticVar: " << staticVar << endl;
    }
};

int MyClass :: int staticVar = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass ::staticFunction();

    return 0;
}