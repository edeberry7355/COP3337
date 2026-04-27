#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix {
public:
    Matrix(int r = 1, int c = 1);

    ~Matrix();

    // copy constructor
    Matrix(const Matrix<T>& other);

    // assignment operator
    Matrix<T>& operator=(const Matrix<T>& other);
    Matrix<T>& operator+(const Matrix<T>& other); // returns the sum of two matrices (not a reference, just the value)
        // throw an exception if the number of rows and columns do not match

    static Matrix<T> load(const char* filename); // this function will take a filename as an input, load information from this file, and turn it into a matrix

    void print() const; // const, so doesn't modify any data members of the class

private:
    T** data; // dynamix dize
    int rows, cols;
};

#include "Matrix.tpp"

#endif