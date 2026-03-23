#include <iostream>
#include <string>

class Hello {
public:
    Hello() : size(0), messages(nullptr) {
        std::cout << "No arg constructor for " << this << std::endl;
    }
    
    Hello(int n) : size(n) {
        std::cout << "Constructor with arguments for " << this << std::endl;
        messages = new std::string[size];
        for (int i = 0; i < size; i++) {
            messages[i] = (i % 2) ? "You are welcome!" : "Go away!";
        }
    }
    
    // Copy constructor
    Hello(const Hello& other) {
        std::cout << "Copy constructor for " << this << std::endl;
        size = other.size;
        // Allocate the memory for the new array
        messages = new std::string[size];
        // Copy the values
        for (int i = 0; i < size; i++) {
            messages[i] = other.messages[i];
        }
    }

    // Destructor (cannot be overloaded - cannot create another one with arguments)
    ~Hello() {
        std::cout << "Destructor for " << this << std::endl;
        if (messages != nullptr) {
            delete [] messages;
        }
    }

    // A constant method means the parameters of the class cannot be changed
    void bye() const {
        std::cout << "Bye!!!" << std::endl;
    }
private:
    std::string* messages;
    int size;
};

int main(void) {
    // Create an object of Hello class dynamically
    // hi is a pointer to a Hello object
    Hello* hi = new Hello;

    // Call bye for hi object
    hi->bye();

    // Create an object dynamically with constructor with arguments
    Hello* hi2 = new Hello(10);

    // Deallocate the memory
    delete hi;
    delete hi2;

    //for (int i = 0; i < 1000; i++) {
    //    // Create a Hello object
    //    Hello(9999);
    //}

    Hello hi3(10);
    Hello hi4 = hi3;

    return 0;
}