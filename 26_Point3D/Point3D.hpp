#ifndef POINT3D_H
#define POINT3D_H
#include "Point.hpp"

// want to have as a child of Point class
class Point3D : public Point {
public:
    // Constructor
    Point3D(int x = 0, int y = 0, int z = 0, const char* tag = nullptr);

    friend std::ostream& operator<<(std::ostream& out, const Point3D& p);

private:
    int z;
};

#endif