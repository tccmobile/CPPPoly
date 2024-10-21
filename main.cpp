#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Square.hpp"
#include <iostream>
#include <vector>
#include <cmath>
#include <typeinfo>
using namespace std;


int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));
    shapes.push_back(new Triangle(3, 4));
    shapes.push_back(new Square(5));

    for (const auto& shape : shapes) {
        cout << *shape << endl;
        cout << "Area: " << shape->area() << endl << endl;
    }

    // Clean up
    for (auto& shape : shapes) {
        delete shape;
    }

    return 0;
}