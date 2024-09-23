#include <iostream>
using namespace std;

void divide(int a, int b){
    if(b == 0){
        throw "Division by zero error!";
    }
    cout << "Result: " << endl;
    if(b != 0){
        cout << "Result: " << a/b << endl;
    }
}
int main(){
    try{
        divide(10, 0);
    }
    catch(const char* e){
        cout << "Exception: " << e << endl;
    }
    return 0;
}