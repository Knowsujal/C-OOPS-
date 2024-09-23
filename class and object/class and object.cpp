#include <iostream>
using namespace std;
//This code is an example of Method Overloading.

class Add{ //Class of the code, that have data for the object.
    public: //This is an Access specifier
    int add(int a, int b){;
    return(a + b);
}
    int add(int a, int b, int c){
        return(a + b + c);
    }
};
int main(){
    Add obj; //Object of the code, that represent a specific example of data.
    int res1, res2;
    res1 = obj.add(2,3);
    res2 = obj.add(2,3,4);
    cout<< res1 << " " << res2 << endl;
    return 0;
}