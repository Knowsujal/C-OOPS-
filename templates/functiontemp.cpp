#include <iostream>
using namespace std;
//Function Template
template <typename T>
T add(T a, T b){
    return a + b;
}
int main(){
    cout << "Int: " << add(1, 2) << endl;
    cout << "Double: " << add(1.5, 2.5) << endl;
    cout << "String: " << add(string("Hello "), string("World")) << endl;
    return 0;
}