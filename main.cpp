#include <iostream>
#include "BaseClass.h"
#include "DerivedClass.h"

int main() {
    // DerivedClass instantiation.
    DerivedClass dObj;
    // BaseClass takes a pointer of it's derived class.
    BaseClass *bPtr = &dObj;

    // Able to print the derived's version in BaseClass because of virtual functions.
    bPtr->print(); // should print "I am the derived class".
    return 0;
}