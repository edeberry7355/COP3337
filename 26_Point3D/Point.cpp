#include "Point.hpp"
#include <cstring>
#include <iostream>

// by default, tag will be a nullptr
Point::Point(int x, int y, const char* new_tag) {
    this->x = x;
    this->y = y;
    // if tag isn't a nullptr
    if (new_tag) {
        // define
        int size = strlen(new_tag);
        tag = new char[size + 1]; // size +1 because we need the null character at the end
        strcpy(tag, new_tag);
    }
    else { tag = nullptr; }
}

// destructor
Point::~Point() {
    if(tag) {
        delete [] tag;
    }
}

// copy constructor
Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    // can't do (tag = other.tag) because it would be a reference to a reference
    if (other.tag) { // (if other.tag isn't a nullptr)
        int size = strlen(other.tag);
        tag = new char[size + 1]; // size +1 because we need the null character at the end
        strcpy(tag, other.tag);
    }
    // if other.tag is a nullptr
    else { tag = nullptr; }
}

bool Point::operator==(const Point& other) {
    // using just x is the x of the current object
    return (x == other.x && y == other.y);
}

Point Point::operator+(const Point& other) {
    return Point(x + other.x, y + other.y);
}


int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

bool Point::operator!=(const Point& other) {
    // *this is the current object
    // use the existing == operator we created and negate it with !
    return !(*this == other);
}

std::string Point::toString() const {
    std::string s;
    if (tag) {
        s += std::string(tag);
    }
    return s + ": (" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point& Point::operator+=(const Point& other) {
    *this = *this + other;
    return *this;
}

Point Point::operator-() const {
    return Point(-x, -y);
}

Point Point::operator++() {
    x += 1;
    y += 1;
    return *this;
}

Point Point::operator++(int) {
    // Create a temporary Point object that equals to the current object
    // Create it in the stack, not the heap (you would have to delete if it was in the heap)
    Point temp(*this); // This is a copy constructor

    // How to do with parameterized constructor
    // Point temp(x, y);
    // We're saving the temporary object, incrementing x and y, but returning the temp with values before incrementing
    this->x += 1;
    this->x += 1;

    return temp;
}

void Point::operator=(const Point& other) {
    x = other.x;
    y = other.y;
    if (tag) {
        delete [] tag;
    }
    // can't do (tag = other.tag) because it would be a reference to a reference
    if (other.tag) { // (if other.tag isn't a nullptr)
        int size = strlen(other.tag);
        tag = new char[size + 1]; // size +1 because we need the null character at the end
        strcpy(tag, other.tag);
    }
    // if other.tag is a nullptr
    else { tag = nullptr; }
}

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << p.toString();
    return out;
}

// this is a friend function
std::istream& operator>>(std::istream& in, const Point& p) {
    std::cout << "Enter x and y: ";
    in >> p.x >> p.y;
    return in;
}