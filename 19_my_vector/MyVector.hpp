#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {
public:
    MyVector(int capacity = 1);     // Constructor with argument or default value is 1
    // Copy constructor
    MyVector(const MyVector& other);
    // Destructor
    ~MyVector();

    void print() const;
    void push_back(int val);    // Add the new element at the end

    int pop_back();
    bool empty() const;

    int getCapacity() const;

    int at(int index) const;

    int thirdMax() const; // Should return the third distinct max number in the array
                          // If there is no third max, return max

private:
    // Represent array with an integer pointer
    int* elements;  // Array of elements
    int size;       // Current number of elements
    int capacity;   // Maximum number of elements vector can hold

    void MyVector::allocateMemory(int memory_size);
};

#endif