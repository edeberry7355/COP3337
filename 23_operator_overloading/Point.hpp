#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
    Point(int x = 0, int y = 0);
        // Relational operator
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    // Operator[]
    int& operator[](int index);

private:
    int x, y;
};

#endif