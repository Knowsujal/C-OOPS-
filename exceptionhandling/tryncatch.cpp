#include <iostream>
using namespace std;
//Exception Handling : Try and Catch
void checkAge(int age){
    if(age < 18){
        throw "Age must be 18 or older.";
    }
    cout << "Access granted." << endl;
}
int main(){
    try{
        checkAge(15);
    }
    catch(const char* msg){
        cerr << "Error: " << msg << endl;
    }
    try{
        checkAge(20);
        }
        catch(const char* msg){
            cerr << "Error: " << msg << endl; 
        }
        return 0;
    }