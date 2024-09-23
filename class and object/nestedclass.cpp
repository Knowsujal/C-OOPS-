#include <iostream>
using namespace std;

class OuterClass {
    public:
    class NestedClass {
        public:
        void display() {
            cout << "Inside NestedClass" << endl;
        }
    };
};

int main() {
    OuterClass::NestedClass nestedObj;
    nestedObj.display();

    return 0;
}