#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int*ptr = &var; //Pointer to var

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    return 0;
}