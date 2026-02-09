# Objects and Classes

## Introduction to Object Technology

* Objects have some things in common
* **Object-oriented design (OOD)** models software in terms similar to those that people use...

## Why use objects?

* **Encapsulation**: bundlind data and methods together, restricting direct access to an object's internal state
* **Abstraction**: hiding complex implementation details and exposing only necessary functionality
* **Modularity**: breaking programs into reusable, self-contained units
* **Reusability**: Classes can be reused across different programs or projects

## C / C++

* In C++ the unit of programming is the "class" from which objects are eventually **instantiated** (an OOP term for created)

## Creating Objects

```cpp
void print(const std::string& title, int duration) {
    // instead of doing this we can create a structure
}

// we will have a course of lectures and want to print info about all the lectures in the course
void print_lectures(const std::vector<string>&titles, const std::vector<int>&durations) {
    // iterate through each vector
    // if the sizes of the vectors are not the same, there may be a runtime error
}
// Instead we can use a structure
```

## What is a `struct` in C++

`struct` (short for structure) in C++ is a user-defined sata type that groups related variables (called members) under a single name

* **Members**: Variables or functions defined within the struct
* **Purpose** Used to bundle related data and, optionally, behaviors
