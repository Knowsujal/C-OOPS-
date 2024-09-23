#include <iostream>
using namespace std;

class Base{
    public:
    void baseMethod(){
        cout << "Base method" << endl;
    }
};
class Derived1 : virtual public Base {};
class Derived2 : virtual public Base {};

class Final : public Derived1, public Derived2 {};

int main(){
    Final obj;
    obj.baseMethod();
    return 0;
}
