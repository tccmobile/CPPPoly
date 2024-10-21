#include "Rectangle.hpp"

Rectangle:: Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::area() const  {
    return width * height;
}

void Rectangle::print(ostream& os) const {
        os << "Rectangle with width " << width << " and height " << height;
}
