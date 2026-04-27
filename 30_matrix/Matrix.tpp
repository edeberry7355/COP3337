#include "Matrix.hpp"
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include <fstream>

template <typename T>
Matrix<T>::Matrix(int r, int c) : rows(r), cols(c) {
    // need to allocate the memory that we store in the data
    // depends on how many rows and columns we have

    // edge case: if the rows or columns are less than one
    if (rows < 1 || cols < 1) {
        rows = 0;
        cols = 0;
        throw std::logic_error("Rows and columns should be positive");
    }

    // we need as many pointers as number of rows
    data = new T*[rows]; // create an array of pointers to T
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols]; // Allocate array of T elements
    }

    // Initialize the array
    // 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            data[i][j] = T(); // T() - default template value
        }
    }
}

template <typename T>
void Matrix<T>::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << std::left << std::setw(6) << data[i][j];
        }
        std::cout << "\n";
    }
}

template <typename T>
Matrix<T> Matrix<T>::load(const char* filename) {
    std::ifstream in(filename);
    if (!in) { // was not able to open file, file doesn't exist, etc
        // will be a nullptr
        throw std::invalid_argument("Cannot open the file to load");
    }

    int r, c;
    in >> r >> c;
    Matrix m(r, c);

    // initialize, read from the file and save it in my matrix data
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            // take value from in and save it in data
            in >> m.data[i][j];
        }
    }

    // close file stream
    in.close();

    return m;
}