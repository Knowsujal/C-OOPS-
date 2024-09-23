#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "I can eat" << endl;
    }
    void sleep(){
        cout<< "I can sleep" << endl;
    }
};

class Dog : public Animal{
    public: 
    void bark(){
        cout << "Woof Woof!!!!!" << endl;
    }
};
int main(){
    Dog myDog;
    myDog.eat();
    myDog.sleep();
    myDog.bark();

    return 0;
}