#include<iostream>
using namespace std;

void mayThrow() noexcept(false){
    throw "An exception!";
}
void noThrow() noexcept{
    //this function doesnot throw exception
}
int main(){
    try{
        mayThrow();
    }
    catch(const char*e){
        cout << "Exceptiopn: " << e << endl;
    }
    return 0;
}