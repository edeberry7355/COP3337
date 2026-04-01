# Chapter 10: Object Oriented Thinking

## Find all the errors

Static function accessing instance member name
Need to initialize the static property outside: `int Person::population = 0;`

## Find all the errors 2s

Want the square of 5: `Math::square(5)`

## Array of Objects

Imagine you have the following class:

```cpp
class Plane {
public:
    std::string model;
    int capacity;

    Plane(std::string m, int c) : model(m), capacity(c) {}
};
```

How would you create a std::vector that stores Plane objects?

```cpp
std::vector<Plane> fleet;
```

Add the following objects to the fleet:

* Boeing 737 (189 seats)
* Airbus A320 (180 seats)

```cpp
fleet.push_back(Plane("Boeing 737", 189));
fleet.push_back(Plane("Airbus A320", 180));
```

Print the model of the first plane in the fleet

```cpp
std::cout << fleet[0].model << std::endl;
```

Change the capacity of the second plane in the fleet to 186

```cpp
fleet[1].capacity = 186;
```

Create an array of 3 Plane objects

```cpp
Plane fleet[3] = {
    Plane("Boeing 737", 189),
    Plane("Airbus A320", 180),
    Plane("Embraer 190", 100)
};
```

## Instance and Static Members

* An instance variable is tied to a specific instance of the class; it is not shared among objectects of the same class
* A static variable (class variable) is shared by all objects of the class. Static variables store values in a common memory location
* A static fucntion cannot access instance members of the class
* A static variable or function can be invoked from an instance function
