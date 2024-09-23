#include<iostream>
#include<exception>
using namespace std;

void checkException(){
    if(std::uncaught_exceptions() > 0){
        cout << "An exception is active." << endl;
    }
    else{
        cout << "No active exceptions." << endl;
    }
}
int main(){
    try{
        throw 20;
    }
    catch(int e){
        checkException();
    }
    return 0;
}