#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char* tag = nullptr);

    // Destructor
    ~Point();

    // Copy constructor - we need one because we dynamically allocate the memory
    Point(const Point& other);

        // Relational operator
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    // Arithmetic operator
    Point operator+(const Point& other);
    
    // TODO
    Point operator*(const Point& other);
    Point operator-(const Point& other);

    // Arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator-=(const Point& other); // TODO
    Point& operator*=(const Point& other); // TODO

    // Unary operator
    // int x = 1, int y = -x;
    Point operator-() const;

    // Preincrement
    Point operator++();
    
    // Postincrement
    Point operator++(int);

    // Operator[]
    int& operator[](int index);

    // Assignment operator
    void operator=(const Point& other);

    std::string toString() const;

    // friend can access all the private properties of the current class
    // needs to be friend to access member data such as x and y
    friend std::istream& operator>>(std::istream& in, const Point& p);
protected:
    int x, y;
    // have a character pointer called tag
    // some character array that will hold some information about the point
    char* tag;
};

// non-member method
std::ostream& operator<<(std::ostream& out, const Point& p);

#endif