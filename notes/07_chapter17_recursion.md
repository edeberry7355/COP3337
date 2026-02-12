# Chapter 17: Recursion

## Function Call Stack

Each time a function calls another function, an entry is **pushed** onto the stack. This entry, called a **stack frame**, contains the **return address** that the called function needs in order to return to the calling function.

When that function returns (and no longer needs its automatic variables) its stack frame is **popped** from the stack, and those local automatic variables are no longer known to the program.

## When a Function Calls Itself

A function that calls itself either directly or inderectly through another function is a **recursive function**.

When this happens, a new stack frame for the function is pushed into the stack.

## Example Recursive Function (countdown)

```cpp
void countdown(int number) {
    printf("%d", number);
    countdown(number - 1);
}
```

To break this function down, we can create a function call stack. Let's say that the function `countdown(3)` is called in `main()`. Beginning from the bottom row is the main function that called the countdown function. We then enter the countdown function with the argument '3'. Within the function, the current argument (`number`) is printed. Then, the function calls itself with the argument `number - 1`, or the current argument minus one. In this case, that will be '3 - 1', so the function `countdown(2)` will be called, as shown in the 3rd stack frame. This process will repeat indefinitely as shown in the function call stack below.

| Stack Frame # | Function | Print: |
| -- | -- | -- |
| ... | ... | ... |
| 6 | countdown(-1) | -1 |
| 5 | countdown(0) | 0 |
| 4 | countdown(1) | 1 |
| 3 | countdown(2) | 2 |
| 2 | countdown(3) | 3 |
| 1 | main() | |

As you can see, the above function will never end, as it does not have a **base case** for when the function will stop calling itself.

## Recursive Function

A recursive function divides the problem into two conceptual pieces:

* The **base case:** when the function doesn't call itself
* The **recursive case:** when the function solves a small part of the problem and calls a fresh copy of itself to work on the smaller problem.

## Fixed Example (countdown with base case)

```cpp
void countdown(int number) {
    if (number < 1) {
        return;
    }
    else {
        printf("%d", number);
        countdown(number - 1);
    }
}
```

Now, once the function `countdown(0)` is called, rather than printing the number, the function has reached its **base case** and will return, or exit the function.

## Writing a recursive function

* Think about the base case

```cpp
// Print least significant to most significant digits
void print_digits_reverse(unsigned);

if (n <= 0) {
    return;
}
std::cout << n % 10;
pdr(n/10);
```

### Here is the above function's call stack

| | Function Call Stack |
| -- | -- |
| 1 | pdr(0) |
| 1 | pdr(1) |
| 1 | pdr(12) |
| 1 | pdr(123) |

## Non-void Recursive Function

```cpp
double power(int number, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent < 0) {
        return (double) 1/ number * power(number, exponent + 1);
    }
    else {
        return (double) number * power(number, exponent - 1);
    }
}
```

## Recursion vs Iteration

* Any problem that can be solved recursively can also be solved iteratively
* Recursive is normally chosen when it more naturally mirrors the problem and results in a code easier to debug
* Cons of recursion
  * Repeatedly calling the function adds extra overhead
  * This can be expensive in both processor time and memory space
  * Can lead to stack overflow if not properly managed

## Examples

```cpp
// What would be the output?
// Create a function call stack
```

| | Function Call Stack |
| -- | -- |
| 1 | f(0) --> |
| 1 | f(1) |
| 1 | f(2) |
| 1 | f(3) |
| 1 | f(4) |
| 1 | f(5) |
| 1 | main() |

## Example 2

| | Function Call Stack |
| -- | -- |
| 1 | f1(0,25) 25 ---> |
| 1 | f1(1,24) v |
| 1 | f1(2,22) v |
| 1 | f1(3,19) v |
| 1 | f1(4,15) v |
| 1 | f1(5,10) v |
| 1 | main() <-- 25 |

## Attendance 2/2/26

```cpp
<151>8K9
```

## Print using recursion

```cpp
/* Want to print:
aaa
aab
...
...
zzz
*/

// Need to combine iteration with recursion
// Make a function
print(int n);
```

## Extra Practice

```cpp
// Think about how to do permutations
// abc, abd, .... biggest combination without duplicates: zyx
```
