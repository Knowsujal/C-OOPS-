#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void makeSound(){
        cout << "Some generic sound" << endl;
    }
};

class Dog : public Animal{
    public:
    void makeSound() override{
        cout << "Bhauu Bhauuu!!!" << endl;
    }
};
int main() {
    Animal* animal = new Dog();

    animal->makeSound();
    delete animal;

    return 0;
}