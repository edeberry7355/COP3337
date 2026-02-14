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

Examples

```cpp
struct StructName {
    // Data members (attributes)
    // Member functions (optional)
}

// OR

typedef struct {
    // Data members
} TypeName;
```

## Creating Objects

```cpp
struct Lecture {
    std::string title;
    int duration;
    std::string author;
};

void printLecture(const Lecture& lecture) {
    std::cout <<
        "Title: " << lecture.title <<
        ", duration: " << lecture.duration <<
        ", author: " << lecture.author << std::endl;
}
```

## Classes

The car class is a general description of the car.
An object of the class is an actual car (green, ford, mustang, gasoline)

## Objects

The state of an object (also known as properties or attributes) is represented by data fields with their current values. A circle object, for example, has a data field, radius, which is the property that characterizes a circle.

The behavior of an object (also known as actions) is defined by functions. To invoke a function on an object is to ask the object to perform an action.

## Data Field Encapsulation

Making data fields private protects data and makes the class easy to maintain

To prevent direct modifications of properties, declare the data field private, using the private keyword. This is known as data field encapsulation

To make a private data field accessible, provide a get function to return the field's value

To enable a private data field to be updated, provide a set function to set a new value

Colloquially, a get function is referred to as an accessor, and a set function is referred to as a mutator.

Get: `returnType getPropertyName()`

Set: `void setPropertyName(dataType propertyValue)`

## Constructors

* A constructor is invoked to create an object
* Constructors are for initializing data fields
* Constructors **must** have the same name as the class itself
* Constructors do not have a return type - not even void
* Constructors are invoked when an object is created

```cpp
// Create an object using a constructor
ClassName objectName(arguments);

// Create an object using the no-arg constructor
ClassName objectName;
```