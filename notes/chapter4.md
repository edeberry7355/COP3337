# Chapter 4: Random Numbers, Math Functions, Formatted Output

## Generating Random Numbers

* For number 1 and number 2, the range is 0-9

## Generating Random Numbers in Modern C++11

* C++11 introduced the `<random>` library, replacing older methods like `rand`
  * Offers control, flexibility, and ...

## Why `<random>` in C++

* Problems with rand():
  * ...
  * ...
* Advantages of random():
  * ...

## TODO

Write a C++ program to simulate rolling two six-sided dice three times and calculating the average sum of the rolls

```cpp
// Code here
```

## Mathematical Functions

Cmath

Table 4.1

Table 4.2

| Function | Description |
| -- | -- |
| | |

ceil, floor, max, min, abs, exp

## Formatting Console Output

You can use the stream manipulators to display formatted output on the console. Stream manipulators are included in the `<iomanip>` header file.

Table 4.8

| Operator | Description |
| -- | -- |
| setprecision(n) | sets the precision of a floating-point number |

### setprecision(n) Manipulator

* Uses the `std` namespace
* setprecision(3): 12.3

## Loops

Tell a program to execute statements repeatedly

### The while loop

Executes statements repeatedly while the condition is true.

* Need to have an increment so that it ends at some point
* Need to initialize above the while loop

### Controlling a loop with a sentinal value

* Such as while data is not 0

### do-while loop

* Executes everything in the loop once before checking the condition

### while loop Practice

* how many times will the loop go: infinite bc i doesn't change
* *pre vs post increments

### The for loop

* ...
* A for loop can generally be converted into the while loop

### for loop Practice

n + 1 times

### Range-based for Loop

Executes a for loop over a range. It is a more readable equivalent to the traditional for loop operating over a range of values.

Ex.

```cpp
// Printing string characters
```

* Break exits the loop
* Continue skips one operation

Adds every number from 0-20 excluding 10 and 11.

### Nested Loops


