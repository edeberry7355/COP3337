# Chapter _: Exception Handling

If you enter 0 for second number, a runtime error would occur, because you cannot divide an integer by zero
A simple fix is adding an if statement but

## Exception Handling Advantages

* Enables a function to throw an exception to its caller
* Often, the called function does not know what to do in case of error
* The fundamental idea of exception handling is to separate error detection (done in a called function) from error handling (done in the calling function)

## Template for try-throw-catch

    try
    {
        Code to try;
        Throw an exception with a throw statement or
            from a function if necessary;
        More code to try:
    }
    catch (type ex)
    {
        Code to process the exception;
    }

throw -> sends error
try -> watches code
catch -> fixes or reports

## When to use exceptions

* For dealing with unexpected error conditions. Do not use a try-catch block to deal with simple, expected situtations
* If you want the exception to be processed by it's caller, you should throw it
* If you can handle the exception in the function where it occurs, there is no need to throw or use exceptions

## Review

If I'm a function and I throw an exception, the caller of the function will try to handle the exception.

    try {
        code 1; // can throw an int
        code 2;
    }
    catch (int ex) {
        code 3;
    }
    code 4;

* If no exceptions are thrown, code 1, code 2, and code 4 will be executed
* If code 1 throws an exception, we go to code 3 then go to code 4
* If a double was thrown, the code would not work

## Practice

* Input 120, throws exception, catches, then continues
* Input 80, no throw no catch, continue

## Multiple Catches

* Can have multiple catch blocks after try to be able to catch different types of functions
* `catch (...)` - can catch anything, any type
* Catch blocks need to be directly after the try block

## Exception Classes

* All live in the header `<stdexcept>`

## Custom Exception Classes

* Can create your own exception class
* Just like any ...

## Catch block

* Various
* The order
* Must check the grandkid before the kid and the kid before the parent

## Exception Propagation

* ...

### Example

If an exception is thrown in function3
