#include "Point.hpp"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point& other) {
    // using just x is the x of the current object
    return (x == other.x && y == other.y);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

bool Point::operator!=(const Point& other) {
    // *this is the current object
    // use the existing == operator we created and negate it with !
    return !(*this == other);
}

