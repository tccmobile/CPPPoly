#ifndef Rectangle_HPP
#define Rectangle_HPP


#include "Shape.hpp"
#include <iostream>
using namespace std;

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h);
    double area() const override;

    void print(ostream& os) const override;
};  

#endif // !Rectangle_HPP
