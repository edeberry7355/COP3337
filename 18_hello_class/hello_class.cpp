#include <iostream>

class Hello {
public:
    Hello() {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // A constant method means the parameters of the class cannot be changed
    void bye() const {
        std::cout << "Bye!!!" << std::endl;
    }
private:
};

int main(void) {
    // Create an object of Hello class dynamically
    // hi is a pointer to a Hello object
    Hello* hi = new Hello;

    // Call bye for hi object
    hi->bye();

    // Deallocate the memory
    delete hi;

    return 0;
}