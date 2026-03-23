# Chapter 11: Dynamic Memory Allocation

## here

## Acessing Dynamic Objects

## Recap

How do you create a dynamic array of double variables?

    double *pD = new double[size];

How do you release memory?

    delete [] pD;

How do you ...?

    syntax

## Question

Is the syntax correct?

    cout << (new string("Hello"))->length() << endl;

Yes, but you can't access the hello because we never saved the address. It creates an anonymous object dynamically on the heap, which causes a memory leak.

## Destructors

## Questions

Cannot invoke a destructor explicitly ().~_

## Example whiteboard

Hello hi
msg: dynamically allocate array of strings
size: 5

Hello hi2
msg: 

```cpp
Hello hi1(20);
Hello hi2 = hi1;
//Or
Hello hi2(hi1);
// Both of these ^ are bad bc if hi1 is deleted, trying to destruct hi2 will be an error

// Instead, create an array of the same size for hi1
// Then, do a for loop so that the values of the arrays equal each other
```


