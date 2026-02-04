# Chapter 4: Random Numbers, Math Functions, Formatted Output

## Generating Random Numbers

```cpp
#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions

int main() {
  // 1. Generate two random single-digit integers
  srand(time(0)); // set a seed
  int number1 = rand() % 10;
  int number 2 = rand() % 10;

  // 2. Check number1 < number2 and print the appropriate message
  std::cout << ((number1 < number2) ? "num1 is smaller" : "num2 is smaller equal");
}
```

* For number 1 and number 2, the range is 0-9

## Generating Random Numbers in Modern C++11

* C++11 introduced the `<random>` library, replacing older methods like `rand`
  * Offers control, flexibility, and quality for random number generation
  * Use `std::mt19937` for general-purpose randomness

```cpp
#include <iostream>
#include <random>

int main(void) {
  // A seed source for the random number engine
  std::random_device rd;

  // Initialize random number engine with a seed
  std::mt19937 eng((rd()));

  // Define a uniform distribution for integers between 1 and 100
  std::uniform_int_distribution<int> dist(1, 100);

  // Generate and print 5 random numbers
  for (int i = 0, i < 5; ++i) {
    std::cout << dist(eng) << " ";
  }

  std::cout << std::endl;
  return 0;
}
```

## Why `<random>` in C++

* Problems with `rand()`:
  * Limited range and poor randomness quality
  * Not thread-safe, global state
* Advantages of `<random>`:
  * High-quality random number engines
  * Flexible distributions for various needs
  * Thread-safe, explicit state management

## TODO

Write a C++ program to simulate rolling two six-sided dice three times and calculating the average sum of the rolls.

```bash
Roll 1: 3 + 4 = 7
Roll 2: 5 + 6 = 11
Roll 3: 1 + 2 = 3
...
Average sum: 7.4
```

## Mathematical Functions

### Table 4.1 Trigonometric Functions in the `cmath` Header

| Function | Description |
| -- | -- |
| `sin(radians)` | Returns the trigonometric sine of an angle in radians. |
| `cos(radians)` | Returns the trigonometric cosine of an angle in radians. |
| `tan(radians)` | Returns the trigonometric tangent of an angle in radians. |
| `asin(a)` | Returns the angle in radians for the inverse of sine. |
| `acos(a)` | Returns the angle in radians for the inverse of cosine. |
| `atan(a)` | Returns the angle in radians for the inverse of tangent. |

### Table 4.2 Exponent functions in the `cmath` header

| Function | Description |
| -- | -- |
| `exp(x)` | Returns e raised to power of x (e^x). |
| `log(x)` | Returns the natural logarithm of x (ln(x) = log_c(x)). |
| `log10(x)` | Returns the base 10 logarithm of x (log_10(x)). |
| `pow(a, b)` | Returns a raised to the power of b (a^b). |
| `sqrt(x)` | Returns the square root of x for x <= 0. |

### More Mathematical Functions in the `cmath` header

* ceil, floor, max, min, abs, exp

## Formatting Console Output

You can use the stream manipulators to display formatted output on the console. Stream manipulators are included in the `<iomanip>` header file.

### Table 4.8 Frequently Used Stream Manipulators

| Operator | Description |
| -- | -- |
| `setprecision(n)` | sets the precision of a floating-point number |
| `fixed` | displays floating-point numbers in a fixed-point notation |
| `showpoint` | causes a floating-point number to be displayed witha  decimal point with trailing zeros even if it has no fractional part |
| `setw(width)` | specifies the width of a print field |
| `left` | justifies the output to the left |
| `right` | justifies the output to the right |

### setprecision(n) Manipulator

* `n` is the **number of significant digits** (i.e., the total number of digits that appear before and after the decimal point)
* Uses the `std` namespace
* double number = 12.26
* setprecision(3): 12.3
