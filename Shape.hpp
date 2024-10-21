#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0; // Pure virtual function

    // Friend declaration for the << operator
    friend ostream& operator<<(ostream& os, const Shape& shape);

    //  virtual function for derived classes to implement
    virtual void print(ostream& os) const = 0;
};

#endif // !Shape_HPP