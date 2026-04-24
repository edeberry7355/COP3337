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
