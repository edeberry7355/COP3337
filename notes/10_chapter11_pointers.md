# Chapter 11: Pointers

* Pointers are variable sthat store **memory addresses**
* Normally, a variable contains a specific value
* A pointer, on the other hand, contains and **address** of a variable that contains a specific value
* In this sense, a variable name **directly** references a value, and a pointer **indirectly** references a value
* Referencing a value through a pointer is called **indirection**

## Pointer Variable Definitions and Initialization

* Use an `*` after the data type

```cpp
int count;
int *countPtr; // A pointer to the integer
```

* This specifies that a variable `countPtr` is of type `int *` (i.e., a pointer to an integer) and is read (right to left), "`countPtr` is a pointer to `int`" or "`countPtr` points to an object of type `int`."
* Pointers can be defined to point to objects of any type

## Pointer Operators

### The address operator

* The `&`, or **address operator**, is a unary operator that returns the address of its operand
  * `int y = 5;`
  * `int *yPTr;`
  * `yPtr = &y;` this statement assigns the **address** of the variable `y` to pointer variable `yPtr`
  * Variable `yPtr` is then said to "point to" y

### The Indirection Operator

* The unary `*` operator (**indirection** operator or **dereferencing** operator), returns the **value** of the object to which it points
  * `std::cout << *yPtr;` prints the value of variable y
  * Using `*` in this manner is called dereferencing a pointer

## Address/Value

```cpp
int count = 5;
int* pCount = &count;

cout << "The value of count is " << count << endl;
cout << "The value of count is " << *pCount << endl;
cout << "The address of count is " << &count << endl;
cout << "The address of count is " << pCount << endl;
```

## Initializing Pointer

* You should always initialize pointers to prevent errors
* Dereferencing a pointer that is not initialized could cause fatal runtime error or it could accidentally modify important data
* An attempt to dereference a variable that is not a pointer is a compilation error
* C++11 introduced a new keyword **nullptr** for null pointer
* Dereferecning a null pointer is often a fatal execution-time error

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

## Using the Cost Qualifier with Pointers

* The `const` qualifier enables you to inform the compiler that the value of a particular variable should not be modified
* Always award a function enough access to the data in its parameters to accomplish its specified task, but absolutely no more
* If a variable does not (or should not) change in the body of a function to which it's passed, the varaible should be declared `const` to ensure that it's not accidentally modified
* If an attempt is made to modify a value that's declared `const`, the compiler catches it and issues either a warning or an error

### There are four ways to pass a pointer to a function

#### 1. a **non-constant** pointer to **non-constant** data

* can be modified to point to **any data item** of the appropriate type AND the **data** at that location **can be modified** through the pointer
* *The **highest** level of **data access***

#### 2. a **constant** pointer to **non-constant** data

* always points to the same memory location, and the data at that location **can be modified** through the pointer

#### 3. a **non-constant** pointer to **constant** data

* can be modified to point to any data item of the appropriate type, but the data to which it points to **cannot be modified**

#### 4. a **constant** pointer to **constant** data

* always points to the same memory location, and the data at that memory location **cannot be modified**

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
* **Dynamic memory allocation** allocate a new memory at runtime of a program

## Pointers to void

* A `void` pointer (`void*`) is a generic pointer that can hold the address of any data type (`int`, `char`, `float`, custom objects, etc.)
* It cannot be dereferenced directly (no *ptr without casting)
* Useful for generic programming (generic data structures)

| Advantage | Disadvantage |
| --- | --- |
| Flexibility in handling different types without knowing them in advance | Type-unsafe: requires explicit cating, which can lead to errors if mismatched |

```cpp
int main() {
  int num = 42;
  float pi = 3.14;

  void* ptr; // Declare void pointer

  ptr = &num ; // Assign address of int
  std::cout << "Int value via void*: " << *(static_cast<int*>(ptr)) << std::endl;

  ptr = &pi; // Reassign to address of float (no issue)
  std::cout << "Float value via void*: " << *(static_cast<float>(ptr)) << std::endl;

  return 0;

  // in this variable i can store the address of anything
  // i just need to properly cast it
}
```

## Pointers to Functions

* A pointer to a function contains the address of the function in memory
* An **array name** is really the address in memory of the first element of the array
* Similarly, a **function name** is really the starting address in memory of the code that performs the function's task
* Pointers to functions can be passed to functions, returned from functions, stored in arrays, and assigned to other function pointers

`return_type (*pointer_name)(parameter_types);`
