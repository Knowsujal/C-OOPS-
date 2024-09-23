#include<iostream>
using namespace std;

void myTerminate(){
    cout << "Custom terminate handler" << endl;
    exit(1);
}
int main(){
    set_terminate(myTerminate);
    try{
        throw 20;
    }
    catch(int e){
        cout << "Caught exception: " << e << endl;
    }
    throw 20;
    return 0;
}