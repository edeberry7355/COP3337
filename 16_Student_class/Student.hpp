#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
public:
    // Constructor
    Student(const std::string& n, double g);

    // Getter function for total students will be static, not an instance
    static int getTotalStudents();
    static void setGraduationRequirement(double newGPA);

    std::string getName() const;
    double getGPA() const;

    bool canGraduate() const;

    void print() const;
private:
    std::string name;
    double gpa;
    static int total_students;      // Counts total students
    static int next_id;             // Generates unique IDs
    static double goodGPA;          // Graduation requirement
    
    std::string id;
};

#endif
