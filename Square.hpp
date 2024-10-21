#ifndef Square_HPP
#define Square_HPP

#include "Rectangle.hpp"
#include <iostream>
using namespace std;

class Square : public Rectangle {
public:
    Square(double side);

    void print(ostream& os) const override;
};

#endif // !Square