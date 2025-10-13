#include <iostream>
using namespace std;

class Shape {
protected:
    float h, b, w;
public:
    void input_data() {
        cout << "Area of Triangle :" << endl;
        cout << "Enter height (h): ";
        cin >> h;
        cout << "Enter base (b): ";
        cin >> b;
        cout << endl;
    }

    void input_data1() {
        cout << "Area of Rectangle :" << endl;
        cout << "Enter height (h): ";
        cin >> h;
        cout << "Enter width (w): ";
        cin >> w;
        cout << endl;
    }

    virtual void display() {
        cout << "Area from base class" << endl;
    }
};

class Triangle : public Shape {
protected:
    float Area;
public:
    void display() override {
        Area = 0.5f * h * b;
        cout << "The area of triangle is: " << Area << endl;
    }
};

class Rectangle : public Shape {
protected:
    float Area;
public:
    void display() override {
        Area = h * w;
        cout << "The area of rectangle is: " << Area << endl;
    }
};

int main() {
    Shape* ptr;

    Triangle t;
    ptr = &t;
    ptr->input_data();
    ptr->display();

    cout << endl;

    Rectangle r;
    ptr = &r;
    ptr->input_data1();
    ptr->display();

    return 0;
}
