# Chapter 11: Pointers

## Pointer Variable Definitions and Initialization

* Use an `*` after the data type
  * `int count;`
  * `int *countPtr; // A pointer to the integer`
* ...

## Pointer Operators

* The `&`, or **address operator**, is a unary operator that returns the address of its operand
  * `int y = 5;`
  * `int *yPTr;`
  * `yPtr = &y;`

### The Indirection Operator

* The unary `*` operator (indirection operator or dereferencing operator), returns the **value** of the object to which it points
  * `std::cout << *yPtr;` prints the value of variable y
  * Using `*` in this manner is called dereferencing a pointer

...

## Initializing Pointer

* You should always initialize pointers to prevent errors
* ...
* An attempt to dereference a variable that is not a pointer is a compilation error
* C++11 introduced a new keyword **nullptr** for null pointer
* Dereferecning a null pointer is often a ...

## Questions

What is the output of the following code?

```cpp
// 30

// 50

// 90
```

## Using pointers and the indirection operator to simulate pass-by-reference

```cpp
// Could also use '&'
```

## Questions 2

```cpp

```

1. A pointer varaible contains as its value the **address** of another object
2. **nullptr, address (&)**
3. T
4. F - will be a runtime error
5. float *pF;
6. pF = &number1;
7. std::cout << *pF;
8. float number2 = *pF
9. std::cout << number2; OR std::cout << *pF;
10. std::cout << &number1;
11. std::cout << pF;
12. yes

##

### There are four ways to pass a pointer to a function

1. .
2. .
3. .
4. .

char pointer is the address of the character
accept the char character and while dereference,
reverse to uppercase
then increment the address and go to the next character

a non constant pointer to constant data
put the constant before the data type
print just the character, don't modify can change address cannot change the data

have non constant data but constant before the pointer name
need to initialize with a value
always points to x, cannot make it point to y

constant pointer to constant data type
initialize with address
will always point to x, cannot modify value or address of x through pointer

## Arrays and Pointers

print list will print **address** of the first element of the array
print list+1 will print **address** of second element of the array

print *list will print **value** of first element of the array

printout of the following statements
constant pointer to nonconstant data
// wrong: address of first character
value of first character (D)
a
l
l

## Questions 3

is *numbers the same as numbers[0]
yes, it will print -12

fill in the blank
`int* arrPtr = **arr**;`
OR `int* arrPtr = arr[0];`

## Returning a pointer from a function

swap last and first, second and second to last, etc
returns reversed array

## Passing pointer arguments in a function call

parameters: an integer pointer, and a pointer passed by reference
if i change the address in p2, it will change the address that was passed through the pointer
p1 is pass by value, so the address of f(q1, q2), q1 will not be changed

## Pointers (more features)

* **Pointers to void** can hold address of any type and can be typecasted to any type
* **Pointers to functions** pass a function to another funciton, create an array of functions
* **Arrays of pointers** to store the strings (multiple strings in an array of pointers)
* **Self-referential data structures**
* **Dynamic memory allocation** allocate a new memory at ...(runtime?)

## Pointers to void

* .

```cpp
int main() {
  int num = 42;
  float pi = 3.14;

  // in this variable i can store the address of anything
  // i just need to properly cast it
}
```
