#include <iostream>
using namespace std;

class MyClass {
    private:
    int*myArray;
    int size;

    public:

    MyClass(int s) : size(s) {
        myArray = new int[size];
        cout << "Constructor with dynamic allocation is called" << endl;
    }

    MyClass() {
        delete[] myArray;
        cout << "Destructor called" << endl; 
    }
    void setElement(int index, int value) {
        if(index < size) {
             myArray[index] = value;
        }
    }

    int getElement(int index) {
        if(index < size) {
            return myArray[index];
        }
        return -1;
    }
};
int main(){
    MyClass obj(5);
    obj.setElement(0,10);
    cout << "Element at index 0: " << obj.getElement(0) << endl;
    return 0;
}