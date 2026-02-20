// The class implementation file
#include "Car.hpp"

// Want to write implementation for constructor outside of the class
Car::Car() {
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
}

// Implementation for get methods outside of the class
std::string Car::getMake() {
    return make;
}

std::string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}

double Car::getMPG() {
    return MPG;
}

// Implement set methods outside of the class
void Car::setMake(const std::string& make_) {
    if (!make_.empty()) {
        make = make_;
    }
}

void Car::setModel(const std::string& model_) {
    if (!model_.empty()) {
        model = model_;
    }
}

void Car::setYear(int year_) {
    year = (year_ > 1900 ? year_ : 1900);
}

void Car::setMPG(double MPG_) {
    MPG = (MPG_ > 0 ? MPG_ : 0);
}

// Implement class method
void Car::print_info() {
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << MPG << std::endl;
}