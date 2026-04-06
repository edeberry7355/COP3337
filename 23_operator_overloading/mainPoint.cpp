#include <iostream>
#include "Point.hpp"

int main(void) {
    Point p1(3, 4, "p1");
    Point p2(3, 4);
    Point p3(p1);

    // need to overload the assignment operator (=) if we have dynamic memory allocation
    p3 = p2;
    p2 = p3;

    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    std::cout << p3.toString() << std::endl;

    Point p4(1, 3, "p4");
    std::cout << p4;

    std::cin >> p4;
    std::cout << p4;

    // Point p1(3, 4);
    // Point p2(5, 4);
    // Point p3(50, 70);

    // // Arithmetic Operator
    // Point p4 = p1 + p2;
    // std::cout << p4.toString() << std::endl;

    // p4 += p1;
    // std::cout << p4.toString() << std::endl;

    // int x = 1;
    // (x += 2) += 5;
    // std::cout << x << std::endl;

    // Point p5 = -p4;
    // std::cout << p5.toString() << std::endl;

    // // Test preincrement
    // ++p5;
    // std::cout << p5.toString() << std::endl;
    
    // Point p6 = p5++;
    // std::cout << p5.toString() << std::endl;
    // std::cout << p6.toString() << std::endl;
    

    // I want to compare 2 points
    /*
    if (p1 == p2) {
        // The compiler doesn't know how to compare 2 objects of the point class
        // Could tell it how to with a method (such as create a method called .equal())
        // Or to make it even easier, make an == operator
    }
    */
    // if (p1.operator==(p2)) {


//     if (p1 == p2) {
//         std::cout << "Equal\n";
//     }
//     else {
//         std::cout << "Not Equal\n";
//     }

//     // use !=
//     if (p1 != p2) {
//         std::cout << (char) p3[0];
//     }
//     else {
//         std::cout << (char) p3[1];
//     }

//    // returns red because bracket returns value of an integer
//     p1[0] = 52;
//     std::cout << (char) p1[0];

    return 0;
}