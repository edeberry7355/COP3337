#include <string>
#include <iostream>
#include "Student.hpp"

// Initialize the static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.0;

Student::Student(const std::string& n, double g) : name(n), gpa(g) {
    total_students++;
    id = "U00000" + std::to_string(next_id);
    next_id += 5;
}

// Don't need static in the implementation if it was already defined as static in Student.hpp
int Student::getTotalStudents() {
    return total_students;
}

std::string Student::getName() const{
    return name;
}

double Student::getGPA() const{
    return gpa;
}

bool Student::canGraduate() const {
    return gpa >= goodGPA;
}

void Student::print() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "GPA: " << getGPA() << std::endl;
    std::cout << "Can graduate: " << ((canGraduate()) ? "YES" : "NO") << std::endl;
}

void Student::setGraduationRequirement(double newGPA) {
    goodGPA = (newGPA > 2.0 && newGPA <= 4.0) ? newGPA : goodGPA;
}