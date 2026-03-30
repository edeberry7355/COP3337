#include <iostream>
#include "Point.hpp"

int main(void) {
    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(50, 70);

    // I want to compare 2 points
    /*
    if (p1 == p2) {
        // The compiler doesn't know how to compare 2 objects of the point class
        // Could tell it how to with a method (such as create a method called .equal())
        // Or to make it even easier, make an == operator
    }
    */
    // if (p1.operator==(p2)) {
    if (p1 == p2) {
        std::cout << "Equal\n";
    }
    else {
        std::cout << "Not Equal\n";
    }

    // use !=
    if (p1 != p2) {
        std::cout << (char) p3[0];
    }
    else {
        std::cout << (char) p3[1];
    }

   // returns red because bracket returns value of an integer
    p1[0] = 52;
    std::cout << (char) p1[0];

    return 0;
}