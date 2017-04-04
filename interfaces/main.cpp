#include <iostream>

using namespace std;

class Shape {

public:

    // Virtual function providing interface framework.
    virtual int getArea() = 0;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived classes
class Rectangle: public Shape {

public:
    int getArea() {
        return ( width * height );
    }
};

class Triangle: public Shape {

public:
    int getArea() {
        return ( width * height ) / 2;
    }
};

int main() {

    Rectangle rectangle;
    Triangle triangle;

    // Rectangle
    rectangle.setWidth(5);
    rectangle.setHeight(7);
    // Total area of rectangle
    cout << "The total area of the rectangle is: "<< rectangle.getArea() << endl;

    // Triangle
    triangle.setWidth(5);
    triangle.setHeight(7);
    // Total area of triangle
    cout << "The total area of triangle is: "<< triangle.getArea() << endl;

    return 0;
}