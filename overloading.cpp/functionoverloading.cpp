#include <iostream>
using namespace std;

class MathOperations {
public:
   int add(int a, int b){ //Adding two integers
    return a + b;
   }
   
   float add(float a, float b){ //Adding two floating point numbers
      return a + b;
   }
};
//Same function with different datatypes same as in Method Overloading
int main(){
    MathOperations math;
    cout << math.add(5, 3) << endl;
    cout<< math.add(5.5f, 3.2f) << endl;

    return 0;
}