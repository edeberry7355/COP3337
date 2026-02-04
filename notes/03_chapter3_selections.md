# Chapter 3: Selections

## If-Else Statements

* An `if-else` statement decides which statements to execute based on whether the condition is true or false.

```cpp
**Syntax:**
if (booleanExpression) {
    // statement(s)-for-the-true-case;
}
else {
    // statement(s)-for-the-false-case;
}
```

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

* Forgetting necessary braces
* Wrong semicolon at the if line
* Mistakenly using `=` for `==`

```cpp
if(count=1) { // Assigning 1 to the count every time, not checking with ==
    cout
}
```

* Equality test of two floating-point values

```cpp
double x = 1.0 - 0.1 - 0.1 - 0.1 - 0.1 - 0.1 - 0.1;
if (x==0.5) {
    cout << "x is 0.5" << endl;
}

else {
    cout << "x is not 0.5" << endl;
}

// Numbers are stored in base 2, not all decimals are stored perfectly in binary
// There may be a rounding error and cause the code to execute the else statment instead
```

## Conditional Expressions

* Evaluates an expression based on a condition
* Conditional operator (`?:`), commonly known as the ternary operator. It is a shorthand for an if-else statement.

Syntax: `variable = (condition) ? expressionIfTrue : expressionIfFalse;`

```cpp
if (x > 0)
    y = 1;
else
    y = -1;

// Rewrite:
y = (x > 0) ? 1 : -1;
```

### Conditional Expression Example

```cpp
#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    cout << (x < y && y < z ? "sorted" : "not sorted") << endl;

    return 0;
}
```

### Conditional Expression Practice

```cpp
if (x > 50) {
    y = 50;
}
else {
    y = x;
}

// Rewrite
y = (x > 50) ? 50 : x;
```

## Logical Operators

| Operator | Name | Description |
| -- | -- | -- |
| ! | not | logical negation |
| && | and | logical conjunction |
| \|\| | or | logical disjunction |

### Example 1

```cpp
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if
        cout << number << " is divisible by 2 and 3." << endl;
    if
        cout << number << " is divisible by 2 or 3." << endl;
    if
        cout << number << " is divisible by 2 or 3, but not both." << endl;
    
    return 0;
}
```

Note: De Morgan's Law can be used to simplify boolean expressions. The law states:

* `!(condition1 && condition2)` is the same as `!condition1 || !condition2`
* `!(condition1 || condition2)` is the same as `!condition1 && !condition2`

### Example 2

Assuming that x is 1, show the result of the following Boolean expressions

* `(true) && (3 > 4)` - F
* `!(x > 0) && (x > 0)` - F
* `(x > 0) || (x < 0)` - T
* `(x != 0) || (x == 0)` - T
* `(x != 1) == !(x == 1)` - T
