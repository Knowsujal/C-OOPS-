#include <iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public://Constructor
    Person(string n, int a){
        name = n;
        age = a;
    }
    //Getter and setter method to hide the privATE ATTRIBUTES
    string getName(){
        return name;
    }

    void setName(string n){
        name = n;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        if(a > 0) {
            age = a;
        } else{
            cout << "Age must be positive." <<endl;
        }
    }

    void display(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    //Creating object of the person class
    Person person1("John Doe", 20);

//Access modifiers for the data member through public method
    person1.display();

    person1.setName("Jane Doe");
    person1.setAge(25);
    person1.display();

    person1.setAge(-5);

    return 0;
}