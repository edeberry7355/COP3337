#include <iostream>
#include <string>

// Create a Route structure (source, destination)
typedef struct {
// Access specifiers (public or private)
private:
    std::string source;
    std::string destination;
    int length;

public:
    // Define a method
    void print() {
        std::cout << source << " -> " << destination
            << ": " << length << std::endl;
    }
    // Getters and setters

} Route;

int main (void) {
    Route spring_break_trip;

    spring_break_trip.source = "Lakeland";
    spring_break_trip.destination = "Orlando";
    spring_break_trip.length = 50;

    // Change the destination
    spring_break_trip.destination = "New York";
    // Can't forget to update the length too, or info will be wrong
    // Need to protect some members of our structure (use access specifiers)

    // Call the method of an object
    spring_break_trip.print();

    return 0;
}