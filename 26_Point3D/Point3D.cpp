#include "Point3D.hpp"
#include <iostream>

Point3D::Point3D(int x, int y, int z, const char* tag) : Point(x, y, tag) {
        this->z = z;
}

std::ostream& operator<<(std::ostream& out, const Point3D& p) {
    out << "( " << p.x << ", " << p.y << ", " << p.z << ") ";

    return out;
}

// update the operator and print the tag (the name of the point) as well