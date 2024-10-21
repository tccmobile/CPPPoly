#include "Square.hpp"
#include "Rectangle.hpp"
#include <cmath>
#include <iostream>
using namespace std;


Square::Square(double side) : Rectangle(side, side) {}

void Square::print(ostream& os) const  {
    os << "Square with side length " << sqrt(area());
}
