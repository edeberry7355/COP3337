#include <iostream>
#include <string>

class Human {
public:
    Human(const std::string & n = "John Doe", int a = 1) : name(n), age(a) {
        std::cout << "Constructor Human\n";
    }
    
    void printInfo() const {
        std::cout << "My name is " << name << std::endl;
    }

    std::string name;
private:
    int age;
};

class Student : public Human { // student inherits all the *public* properties and methods of the human class
public:
    Student() {

    }

    // pull the constructor of the base class for name and age
    Student(const std::string& n, int a, double g) : Human(n, a), gpa(g) {
        std::cout << "Constructor Student\n";
    }

    void study() {
        std::cout << "I am studying OOP\n";
    }

    // Redefine the method of the parent class
    void printInfo() const {
        std::cout << "I am " << name << std::endl;
        std::cout << "I am a student and my gpa is " << gpa << std::endl;
    }

    // highlight a method name, hit ctrl+shift+l, type new method name, hit escape
    // change the name at every occurance

private:
    double gpa;
};

int main(void) {
    // create a human object
    Human h;

    // Create a student object
    Student st("Michael Phelps", 40, 3.4);

    h.printInfo();
    st.printInfo();
    st.study();

    return 0;
}