# Chapter 12: Templates

Suppose you want to find the maximum of 2 integers, doubles, strings, or characters
You can write four overloaded functions to compare with < or >

* C++ enables you to define a function template with generic types
* Capability to paramaterize types in functions and classes
* Templates functions and classes enable programs to work on many different data types without being rewritten for each one
* You can define template functions and classes in C++

## Generic Max Functions

* The defenition for the function template begins with the keyword template followed by a list of parameters (<typename> T)
* By convention, a single capital letter such as T is used to denote a type parameter

```cpp
template<typename T>
T maxValue(const T& value1, const T& value2) {
  if (value1 > value2)
    return value1;
  else
    return value2;
}
```

## Templates Basics

* The generic maxValue function can be used to return a maximum of two values of any type, provided that:
  * The two values have the same type
  * The two values can be compared using the > operator
* You can put multiple parameters inside the brackets, such as `<typename T1, typename T2, typename T3>`

## Questions

You can invoke maxValue with two arguments of A class objects, such as `maxValue(A(2), A(3))`, ONLY IF the comparison operator `>` was defined

## Class templates

You can define generic types for a `class`

C++ allows you to assign a default type for a type parameter in a class template. For example, you may assign int as a default type in the generic Stack class as follows:

```cpp
  template<typename T = int>
  class Stack
  {
    ...
  }
```
