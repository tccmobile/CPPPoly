#include <iostream>
#include <vector>
#include <cmath>
#include <typeinfo>

// Forward declarations
class Circle;
class Rectangle;
class Triangle;
class Square;

// Abstract base class
class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0; // Pure virtual function

    // Friend declaration for the << operator
    friend std::ostream& operator<<(std::ostream& os, const Shape& shape);

protected:
    // Protected virtual function for derived classes to implement
    virtual void print(std::ostream& os) const = 0;
};

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

// Derived class 1
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

protected:
    void print(std::ostream& os) const override {
        os << "Circle with radius " << radius;
    }
};

// Derived class 2
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

protected:
    void print(std::ostream& os) const override {
        os << "Rectangle with width " << width << " and height " << height;
    }
};

// Derived class 3
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }

protected:
    void print(std::ostream& os) const override {
        os << "Triangle with base " << base << " and height " << height;
    }
};

// Derived class 4
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}

protected:
    void print(std::ostream& os) const override {
        os << "Square with side length " << std::sqrt(area());
    }
};

int main() {
    std::vector<Shape*> shapes;

    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));
    shapes.push_back(new Triangle(3, 4));
    shapes.push_back(new Square(5));

    for (const auto& shape : shapes) {
        std::cout << *shape << std::endl;
        std::cout << "Area: " << shape->area() << std::endl << std::endl;
    }

    // Clean up
    for (auto& shape : shapes) {
        delete shape;
    }

    return 0;
}
