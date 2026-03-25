#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class MyVector {
public:
    MyVector(int capacity = 1);     // Constructor with argument or default value is 1
    // Copy constructor
    MyVector(const MyVector& other);
    // Destructor
    ~MyVector();

    void print() const;
    void push_back(const T& val);    // Add the new element at the end

    T pop_back();
    bool empty() const;

    int getCapacity() const;

    T& at(int index) const;

    // NEW
    void clear();
    int getSize() const;
    void push_front(const T& value);
    void insert(int pos, const T& value);

    int thirdMax() const; // Should return the third distinct max number in the array
                          // If there is no third max, return max

private:
    // Represent array with an integer pointer
    T* elements;  // Array of elements
    int size;       // Current number of elements
    int capacity;   // Maximum number of elements vector can hold

    bool full() const;

    void MyVector::allocateMemory(int memory_size);
};

#include "MyVector.tpp"

#endif