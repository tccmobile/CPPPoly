#include "Triangle.hpp"
#include <iostream>
using namespace std;


Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::area() const  {
    return 0.5 * base * height;
}


void Triangle::print(ostream& os) const  {
    os << "Triangle with base " << base << " and height " << height;
}
