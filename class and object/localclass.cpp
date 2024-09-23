#include <iostream>
using namespace std;

void myFunction() {
    class LocalClass {
        public:
        void display() {
            cout << "Inside LocalClass" << endl;
        }
    };

    LocalClass localObj;
    localObj.display();
}

int main() {
    myFunction();
    return 0;
}