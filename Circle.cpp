
#include "Circle.hpp"
#include <cmath>
#include <iostream>
using namespace std;

Circle:: Circle(double r) : radius(r) {}

double Circle::area() const {
        return M_PI * radius * radius;
    }

void Circle::print(ostream& os) const {
        os << "Circle with radius " << radius;
    }
