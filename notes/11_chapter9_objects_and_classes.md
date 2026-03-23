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

## For 15_Car_class

TODO: constructor with arguments

## Create an object with a no-arg constructor

```cpp
Route route1; // no-arg constructor
Route route3 = Route(); // no-arg constructor
```

NOT `Route route4();;` (this is a function prototype, not an object)

## Create an object using a constructor with arguments

```cpp
Route route2("A", "B"); // constructor with args
Route route5 = Route("A", "B"); // constructor with args
```

## Separating class definition from implementation

* Separating **class definition** from **class implementation** makes the class easy to maintain
* The **class definition** describes the contract of the class and the **class implementation** carries out the cotnract
* The **class definition** lists all the data fields, constructor protoypes, and function prototypes
* The **class implementation** implements the constructors and functions
* The class definition and implementation may be in two separate files. Both files should have the same name but different extension names. The class definition file has an extension name `.h` (header) and the class implementation file in an extension name `.cpp`.

* The `::` symbol, known as the **binary scope resolution operator**, specifies the scope of a class member in a class
* Here, **Circle::** preceding each constructor and function in the Circle class tells the compiler that these constructors and functions are defined in the Circle class

```cpp
// Construct a circle object
Circle::Circle(double _radius) {
    radius = _radius;
}
```

### Benefits to separating into .h and .cpp

* Hides implementation from definition
* You can feel free to change the implementation. The client program that uses the class does not need to change as long as the definition is not changed
* As a software vendor, you can just provide the customer with the **header file** and **class object code** without revealing the **source code** for implementing the class
* This protects the software vendor's **intellectual property**
* Reduces compilation time for large projects

* Better organization
* Reusability
* Faster compilation
* Cleaner structure
* Industry standard

## Preventing multiple inclusions

* **Inclusion guard** prevents header files to be included multiple times
* It is a common mistake to include, inadvertently, the **same header file** in a program multiple times
* `#ifndef` directive along with the `#define` directive can be used to prevent a header file from being included multiple times. This is known as an inclusion guard

## Class abstraction and encapsulation

**Class abstraction** is the separation of class implementation from the use of a class. The details of implementation are encapsulated and hidden from the user. This is known as **class encapsculation**.

## Constant member functions

You can specify a **constant member function** to tell the compiler that the function should not change the value of any data fields in the object

```cpp
double getArea() const;
double getRadius() const;
```

```cpp
// Return the radius of this circle
double Circle::getRadius() const {
    return radius;
}
```

## Compilation

* Each .cpp file is compiled seperately into object code
* The linker combines object files to create the executable
* Ensure all .cpp files are included in the build process

## Array of Objects

You can create an array of any objects just alike an array of primitive values or strings

```cpp
// Declare an array of ten Circle objects
Circle circleArray[10];

Circle circleArray[3] = {Circle(3), Circle(4), Circle(5)};
```

```cpp
class Dealer {
public:
    std::vector<Car> inventory;

    void showInventory();
    void addCar(const Car& car);
};
```

## Passing objects to functions

Objects can be passed to a function by value or by reference, but it is more efficient to pass objects by **reference**. It takes time and additional memory space to pass by value.

```cpp
bool isEfficient(const Car& car) {
    return (car.getMPG() > 20.0) ? true : false;
}
```
