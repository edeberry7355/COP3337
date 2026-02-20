#include <iostream>

class Car {
public:
    // No-arg constructor
    Car();

    // TODO: constructor with arguments

    // Get methods
    std::string getMake();
    std::string getModel();
    int getYear();
    double getMPG();

    // Set methods
    void setMake(const std::string& make_); // Call input make_ to distinguish property from parameter
    void setModel(const std::string& model_);
    void setYear(int year_); // Why aren't these constant and passed by reference
    void setMPG(double MPG_);
    
    // Class methods
    void print_info();

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
};


/*
    TODO
    Mileage: car's mileage
    Fuel capacity: (fuel tank capacity)
    Fuel level: (current fuel in gallons)

    void refuel(double gallons);
        // Logic: cannot put more than fuel capacity
    
    void drive(double distance);
        // Check can i drive this distance, if cannot, say not enough fuel
        // OR say how far you can drive
        // Update the tank capacity based on MPG
        // Print: You drove this far, you have this amount of fuel in your tank left
*/