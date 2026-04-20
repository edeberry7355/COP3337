#include <iostream>

class Dad {
public:
    Dad() {
        std::cout << "Dad's constructor\n";
    }
    // need to create a destructor for dad
    // if you have a base class and you know some dynamic memory will be constructed in a child class,
    // then the destructor of the base class needs to be virtual
    virtual ~Dad() {
        std::cout << "Dad's destructor\n";
    }
};

class Son : public Dad {
public:
    Son() {
        std::cout << "Son's constructor\n";
        // allocate the dynamic memory to 100 integers
        data = new int[100];
        std::cout << "Allocated dynamic memory\n";
    }

    // need to deallocate the memory in the destructor
    ~Son() {
        std::cout << "Son's destructor\n";
        delete [] data;
        std::cout << "Dynamic memory was deallocated\n";
    }

    // has an integer pointer called data
    int* data;

};

int main(void) {
    //Son son; // the memory deallocates automatically with this way

    // instead of creating son the way above, do this:
    Dad* dad = new Son(); // store the address of the derived class in the pointer for the base class
    // but by doing the above, the memory does not automatically deallocate

    delete dad;

    return 0;
}