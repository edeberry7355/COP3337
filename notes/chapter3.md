# Chapter 3: __

## if...else statements

### Nested if...else statements

```cpp
if (x >2) {
    if (y >2) {
        int z = x + y;
        cout << "z is " << z << endl;
    }
}
else cout << "x is " << x << endl;

// if x is 3, y is 4, nothing will print
```

## Common Errors in Selection Statements

```cpp
if(count=1) { // Assigning 1 to the count every time, not checking with ==
    cout
}
```

```cpp
double x = 
// Numbers are stored in base 2, not all decimals are stored perfectly in binary
// There may be a rounding error and cause the code to execute the else statment instead
```

## Conditional Expressions

* Evaluates an expression based on a condition

```cpp
if (x > 0)
    y = 1;
else
    y = -1;

// Rewrite:
y = (x>0) ? 1 : -1;
```

### Conditional Expression Example

```cpp
#include <iostream>

```

### Conditional Expression Practice

```cpp
if (x > 50)


// Rewrite
y = (x > 50) ? 50 : x;
```

## Logical Operators

| | |
| -- | -- |
| ! | not |
| && | and |
| \|\| | or |

### Example 1

```cpp
#include <iostream>

// Look up demorgan theorem/law
```

### Example 2

Assuming that x is 1

* `(true) &&`
* `!(x > 0) ...`
* `...`
...
