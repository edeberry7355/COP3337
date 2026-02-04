# Chapter 5: Loops

Tell a program to execute statements repeatedly.

## The while loop

Executes statements repeatedly while the condition is true.

* Need to have an increment so that it ends at some point
* Need to initialize above the while loop

```cpp
while (loop-continuation-condition) {
    // loop body
    Statement(s);
}
```

## Controlling a loop with a sentinal value

* Such as while data is not 0

## do-while loop

* Executes everything in the loop once before checking the loop continuation condition

## while loop Practice

* how many times will the loop go: infinite bc i doesn't change
* *pre vs post increments

## The for loop

```cpp
for (initial-action; loop-continuation-condition; action-after-each-iteration) {
    // loop body;
    Statement(s);
}
```

* A for loop can generally be converted into the while loop

## for loop Practice

n + 1 times

## Range-based for Loop

Executes a for loop over a range. It is a more readable equivalent to the traditional for loop operating over a range of values.

Ex.

```cpp
for ( range_declaration : range_expression ) {
    loop_statement;
}
// Printing string characters
```

## Keywords break and continue

* Break exits the loop
* Continue skips one operation

Adds every number from 0-20 excluding 10 and 11.

## Nested Loops

A loop can be nested inside another loop.
