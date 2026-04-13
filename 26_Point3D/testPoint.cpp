#include "Point3D.hpp"
#include <iostream>

int main(void) {
    Point3D p(1, 2, 3, "Point");

    std::cout << p;

    return 0;
}