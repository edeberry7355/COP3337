# Chapter 6: Functions

...

## Functions Recap

```cpp
int max(int num1, int num2) {
    int result;

    if (num1 > num2)
        result = num1;
    else 
        result = num2;
    return result;
}
```

1. Function name - `max`
2. Formal parameters - `num1` and `num2`
3. Parameter List - `int num1, int num2`
4. Functions signature (header without return value type) - `max(int num1, int num2)`
5. Return Value Type - `int`
6. Function header - `int max(int num1, int num2)`
7. Function body - Implements the function

## Passing Arguments by Value

The formal parameters won't affect the actual arguments

* In pass-by-value, the actual parameter and its formal parameter are independent variables
* The swap function is invoked by passing two arguments. Interestingly, the values of the arguments are not changed after the function is invoked

## Reference variables

* A reference variable can be used as a function parameter to reference the original variable
* A reference variable is an alias for another variable
* Any changes made through the reference variable are

## Passing Arguments by Reference

* This

Ex 1:

```cpp
void maxValue

// Takes 3 formal parameters, max won't be changed bc it's passed by value (creates a copy)
```

Ex 2:

```cpp
// Passed by reference, so max will be modified
```

## Constant Reference Parameters

* Use a pointer bc it's more computationally efficient than passing by value, which creates a copy

## Functions Recap 2

Identify errors

```cpp
// Function 2 has no type
// Function 2's second argument does not specify a variable type
// Function 1 is called with a double/float argument but the function only takes integers
```

## Overloading functions

Enables you to define functions with the same name as long as their integers are different

## Local Global

Local vs. Global

## Static Local Variables

* Static local variables are permanently allocated in the memory for the lifetime of the program
* To declare a static variable, use the keyword static

Example

```cpp
// First print: 2 2
// Second print: 
```

Example

```cpp
// The static j will increment bc we always look for the closest scope
```
