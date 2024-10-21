#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Square.hpp"

// Overloaded << operator for Shape
std::ostream& operator<<(std::ostream& os, const Shape& shape) {
    // Use typeid to determine the actual type of the object
    if (typeid(shape) == typeid(Circle)) {
        shape.print(os);
    } else if (typeid(shape) == typeid(Rectangle)) {
        shape.print(os);
    } else if (typeid(shape) == typeid(Triangle)) {
        shape.print(os);
    } else if (typeid(shape) == typeid(Square)) {
        shape.print(os);
    } else {
        os << "Unknown Shape";
    }
    return os;
}