# Chapter _: Inheritance

...

* A derived class inherits accessible data fields and functions from its base class and may also add new data fields and functions
* For example, suppose you are to define classes to model circles, rectancles, and triangles. These classes have many common ...

## Points about inheritance

* For two reasons: reusing software, avoid redundancy
* Not all classes should be modeled using inheritance ...
* Do not blindly extend a class just for the sake of reusing functions. For example, it makes no sense for a Tree class to extend a Person class, even though they share common properties such as height and weight.

## Constructors and Destructors

* The constructor of a derived class first calls its base class's constructor before it executes its own code. The destructor of a derived class executes its own code then automatically calls ...

## Constructor Chaining

```cpp
class Person {

};
class Employee : public Person {

};
class Faculty : public Employee {

};
int main() {

}
```

* When constructing an object of a derived class, the derived class constructor ...

## Destructor Chaining

When an object of a derived class is destroyed, the derived class destructor is called. After it finishes its tasks, it invokes its base class destructor. This process continues until the last ...

## Calling Base Class Constructors

Unlike data fields and functions, the constructors of a base class are not inherited in the derived class. They can ...

```cpp
DerivedClass(parameterList) : BaseClass() {

}
// OR

```

## No-Arg Constructor in Base Class

* A constructor in a derived class must always invoke a constructor in its base class
* If a base constructor is not invoked explicityly, the base class' no-arg ...

## Calling Base Class Constructors 2

```cpp
// Construct a circle object with ...
```

## Analyze this code for problems

```cpp
// base class is fruit, child class is apple
// can't call apple constructor, need to call fruit constructor
// need a default id or to make apple's constructor take a id parameter
```

## Calling Base Class Constructors 3

```cpp
// Construct a circle object with specified radius
// Note: pass specific parameters to base class
Circle::Circle(double radius, const string& color, bool filled) : GeometricObject(color, filled) {
    setRadius(radius);
}
```

## Changing a function

* I want to have a different print function for the child class rather than use the parent class' print function
* Define another print that is called the same, returns the same
* What if I want to use the full functionality of the base class and add more to it
  * Call the base class method AND do other things

```cpp
void print() {
    // other things here
    Parent::print();
    // and/or other things here
}
```

## Redefining VS Overloading

* Overloading is ...
* Redefining is ...

## Question

overloaded bc parameter list is different

## Redefining functions

Example 1

```cpp


// in the student i can call the base class method by adding the parent class colon colon then add other functionality
```

Example 2

```cpp
Human michael("Michael")
```

Example 3

* You can redefine this function in the derived class to return a more specific description
* If you wish to invoke the `printInfo()` function defined in the `Human` class on the calling object `st`, use the **scope resolution operator (`::`)** with the base class name as follows

```cpp
st.Human::printInfo
```

## The protected Keyword

So far we have used two access specifiers, public and private

* We use the private and public keywords to specify whether data fields and functions can be accessed from the outside of the class
* Private members can only be accessed from the inside of the class and public members can be accessed from any other classes
* A protected data field can be ...

## Type of Inheritance

Table for public, private, and protected
We will do public type of inheritance all the time

## Generic Programming

* An object of a derived class can be passed wherever an object of a base type parameter is required. Thus, a function can be used generically for a wide range of object arguments. This is known as **generic programming**.
