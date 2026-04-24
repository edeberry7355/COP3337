#include <iostream>
#include <stdexcept>

// Can create our own exceptions
class MyException : std::logic_error {
public:
    MyException(int code, const std::string& msg)
        : std::logic_error(msg), err_code(code) {} // calling the constructor of the base class

    int getCode() const {
        return err_code;
    }

    const char* what() const noexcept override {
        std::string out("The exception is ");
        out += std::to_string(getCode());
        // std::cout << "The exception code is " << getCode() << std::endl;
        out += std::logic_error::what();
        //std::cout << std::logic_error::what() << std::endl;
        
        return out.c_str();
    }

private:
    int err_code;
};


class Fraction {
public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {

    }

    int quotient() {
        if (den == 0) {
            // throw "Cannot divide by zero"; // this is a character array, not a string
            throw std::runtime_error("Cannot divide by zero");
        }
        // If the fraction is negative throw logic_error
        if ((num < 0 && den > 0) || (num > 0 && den < 0)) {
            throw std::logic_error("The result is negative");
        }
        // if quotient greater than 100 throw MyException with code 13
        if (num / den > 100) {
            throw MyException(13, "The quotient is greater than 100");
        }

        return num / den;
    }

private:
    int num;
    int den;
};

int main(void) {
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;

    Fraction f1(n1, n2);
    try {
        std::cout << f1.quotient() << std::endl;
        std::cout << "End of try block\n";
    }
    // pass catch by constant reference
    catch (const MyException& ex) {
        std::cout << "MyException exception was caught: " << ex.what() << std::endl;
    }
    // catch (const char* ex) { // type of catch is the type of ...
    catch (const std::logic_error& ex) {
        // std::cout << "Char* exception was caught: " << ex << std::endl;
        std::cout << "Logic_error exception was caught: " << ex.what() << std::endl; // what is defined in base class and overriden in all child classes 
    }
    catch (const std::exception& ex) {
        // Runtime is a kid of exception
        // This block must be after logic error because more specific goes first, more broad goes after
        std::cout << "Base class exception was caught: " << ex.what() << std::endl; // what is defined in base class and overriden in all child classes 
    }

    std::cout << "End of program\n";
    
    return 0;
}