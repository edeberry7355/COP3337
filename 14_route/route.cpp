#include <iostream>
#include <string>
#include <cstdlib> // For the random function

// Create a Route structure (source, destination)
//typedef struct {
// By default in structure everything is public, in class everything is private by default
// Change it from a structure to a class
class Route {
// Access specifiers (public or private)
private:
    std::string source;
    std::string destination;
    int length;

    // Private method
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }

public:
        // Constructors are called when the object is created
    // Constructors should be public
    // Constructors have no return type (not even void)
    // Constructors have the same name as the class
    /* Create a no argument constructor
    Route() {
        length = 0;
    }
    */

    // No argument constructor (different syntax)
    Route() : source("-"), destination("-"), length(0) {

    }

    // Constructor with arguments
    Route(const std::string& s, const std::string& d) {
        setSource(s);
        setDestination(d);
    }

    // Define a method
    void print() {
        std::cout << source << " -> " << destination
            << ": " << length << std::endl;
    }
    // Getters and setters (get functions, accessor functions)
    std::string getSource() { // Standard syntax has no inputs
        return source;
    }
    
    std::string getDestination() {
        return destination;
    }

    // Set methods (setters, mutator functions)
    void setSource(const std::string& new_source) {
        source = new_source;
        // Call private method
        updateLength();
    }

    void setDestination(const std::string& new_destination) {
        destination = new_destination;
        // Call private method
        updateLength();
    }

    void setLength(const int& new_length) {
        length = new_length;
    }

};

int main (void) {
    // Set the seed of random numbers so they will be different every time
    srand(time(0));

    Route spring_break_trip;
    spring_break_trip.print();

    spring_break_trip.setSource("Lakeland");
    spring_break_trip.setDestination("Orlando");

    // Call the method of an object
    spring_break_trip.print();

    // Change the destination
    spring_break_trip.setDestination("New York");
    // Can't forget to update the length too, or info will be wrong
    // Need to protect some members of our structure (use access specifiers)

    // Call the method of an object
    spring_break_trip.print();

    // Create second Route object
    Route summer_trip("Lakeland", "Tokyo");
    summer_trip.print();

    return 0;
}