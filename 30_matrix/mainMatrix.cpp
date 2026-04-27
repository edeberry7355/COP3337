#include "Matrix.hpp"
#include <iostream>
#include <stdexcept>

int main() {
    int r, c;

    // use a try catch because our matrix can throw an error
    std::cout << "Enter rows and columns: ";
    std::cin >> r >> c;

    try {
        Matrix<double>(r, c).print();
    }
    // can catch the type of exception that the matrix can throw (logic error)
    catch (const std::logic_error& ex) {
        std::cout << ex.what() << std::endl;
    }

    // create matrix from input.txt file
    try {
        Matrix<int> mat = Matrix<int>::load("input.txt");
        mat.print();
    }
    // catch the base class to be able to catch both logic error or invalid argument
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}