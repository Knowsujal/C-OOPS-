#include <iostream>
using namespace std;

void display(int a, int b=10) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    display(5);
    display(5, 20);
    return 0;
}