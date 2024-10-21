#ifndef Circle_HPP
#define Circle_HPP

#include "Shape.hpp"
#include <iostream>
using namespace std;


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);

    double area() const override; 

    void print(ostream& os) const override;    
};

#endif // !Circle_HPP


