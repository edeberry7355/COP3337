// #include "MyVector.hpp"
// #include <iostream>

template <typename T>
MyVector<T>::MyVector(int capacity) : size(0) {
    // Want to create an array
    this->capacity = capacity;
    // Create an array with this capacity
    elements == new T[capacity];
}

// MyVector::MyVector(const MyVector& other) {
//     capacity = other.capacity;
//     size = other.size;
//     elements = new int[capacity];

//     // Copy the elements
//     for (int i = 0; i < size; i++) {
//         elements[i] = other.elements[i];
//     }
// }

template <typename T>
void MyVector<T>::print() const {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << " ";
    }
    std::cout << "]\n";
}

template <typename T>
void MyVector<T>::push_back(const T& val) {
    // TODO make it dynamic array
    // Check if capacity = size
    // Create a new array with double the capacity
    if (size == capacity) {
        allocateMemory(capacity * 2);
    }
    elements[size] = val;
    size++;
}

template <typename T>
void MyVector<T>::allocateMemory(int memory_size) {
    T* old_array = elements;
    capacity *= 2;
    elements = new T[capacity];
    //Copy the elements
    for (int i = 0; i < size; i++) {
        elements[i] = old_array[i];
    }
    delete [] old_array;
}

// bool MyVector::empty() const {
//     return size == 0;
// }

// int MyVector::getCapacity() const {
//     return capacity;
// }

// int MyVector::pop_back() {
//     if (!empty()) {
//         if (size < capacity / 2) {
//             allocateMemory(capacity / 2);
//         }
//         return elements[--size];
//     }
//     else {
//         return -9999999;
//     }
// }

// int MyVector::at(int index) const {
//     if (index > -1 && index < size) {
//         return elements[index];
//     }
//     return -9999999;
// }


// // Destructor
// MyVector::~MyVector() {
//     // Deallocate the memory that is stored in elements
//     delete [] elements;
// }