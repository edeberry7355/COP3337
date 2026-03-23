# Chapter _: Templates

Finding maximum of 2 integers, doubles, strings, or characters
You can write four overloaded functions to compare with < or >

* C++ enables you to define a function template with generic types
* Capability to paramaterize types in __ and __
* .
* .

## Generic Max Functions

* The defenition for the function template begins with the keyword template followed by a list of parameters (<typename> T)
* .

```cpp
// Example
```

## Templates Basics

* The generic maxValue function can be used to return a maximum of two values of any type, provided that:
  * The two values have the same type
  * The two values can be compared using the > operator
* You can put multiple parameters inside the brackets, such as `<typename T1, typename T2, typename T3>`

## Questions

You can invoke maxValue with two arguments of A class objects, such as `maxValue(A(2), A(3))`

* Only if the comparison operator `>` was defined

## Class templates

You can define generic types for a `class`

