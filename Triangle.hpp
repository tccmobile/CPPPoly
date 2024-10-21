#ifndef Triangle_HPP
#define Triangle_HPP

#include "Shape.hpp"
#include <iostream>
using namespace std;

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h);

    double area() const override ;

    void print(ostream& os) const override ;
};

#endif // !Triangle_HPP

