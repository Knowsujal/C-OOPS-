#include <iostream>
using namespace std;

class Shape{
    public:
    virtual float calculateArea() = 0;
    virtual void display() = 0;
};

class Rectangle: public Shape{
    private:
    float length;
    float width;

    public:
    Rectangle(float l, float w) : length(l), width(w){}

    float calculateArea() override {
        return length * width;
    }

    void display() override{
        cout << "Rectangle- Length: " << length << ", Width: " << width << ", Area: " << calculateArea() << endl;
    }
};

int main() {
    Shape* shape1 = new Rectangle(5, 4);

    shape1->display();

    delete shape1;

    return 0;
}