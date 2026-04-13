#include <iostream>
#include <string>

class A {
public:
    std::string msg1 = "Message one!";
private:
    std::string msg2 = "Message two!";
protected:
    std::string msg3 = "Message three!";
};

class B : public A {
public:
    void method() const {
        std::cout << msg1 << std::endl; // public is fine
        // std::cout << msg2 << std::endl; // no access
        std::cout << msg3 << std::endl; // protected is fine
    }
};

int main(void) {
    B b;
    b.method();
    b.msg1; // good
    // b.msg2; // no access
    // b.msg3; // no access

    return 0;
}