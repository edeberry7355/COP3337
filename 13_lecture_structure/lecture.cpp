#include <iostream>
#include <string>

// Create a structure description
typedef struct {
    std::string title;
    int duration;
} Lecture;

int main (void) {
    // Create a Lecture object
    Lecture oop_lecture;

    // Set the properties
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 10000;

    std::cout << "Title: " << oop_lecture.title << std::endl;
    std::cout << "Duration: " << oop_lecture.duration << std:: endl;

    return 0;
}

