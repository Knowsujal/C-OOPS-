#include <iostream>
using namespace std;

class Shape{
    public:
    void width(int w){
        shape_width = w;
    }
    void height(int h){
        shape_height = h;
    }
    int areaOfSquare(int s){
        return s*s;
    }
    int areaOfRectangle(int l, int b){
        return l*b;
    }
    protected:
    int shape_width;
    int shape_height;
};
int main(){
    shapes R;
    R.width(5);
    R.height(10);
    cout << "The area of rectangle is: " << R.areaOfRectangle << endl;
    return 0;
}