# CPPPoly

This example showcases several key concepts of object-oriented programming and C++:

* Abstract classes and pure virtual functions
* Inheritance
* Polymorphism
* Virtual destructors
* Smart use of existing classes (Square inheriting from Rectangle)
* Memory management (creating objects with new and deleting them at the end)
* Operator overloading
* Runtime type identification (RTTI) with typeid
* Friend functions

The << operator in the base class determines the actual type of the object at runtime and then calls the appropriate print function. This allows for polymorphic behavior while still using the correct derived class implementation.
