# Chapter

* The operators are functions defined in a class
* Most of the operators in .

    data type ClassName::operator OperatorName (const ClassName &ParameterName)

You cannot create new operators; only existing operators can be overloaded

    + - * / ...

Operators that cannot be overloaded

    ?:  .   .*  ::

## Precedence and Associativity

C++ defines the operator precedence and associativity. You cannot change the operator precedence and associativity by overloading

* Order of operations cannot be changed

Most operators are binary operators. Some are unary. You cannot change ...

## Relational Operators

bool ClassName::operator<(Const ClassName&)

## Return by Reference

int& operator[](int index);

// By returning a reference, we are able to change it directly

ex.

    // Can change the value of x in the point object p
    Point p;
    p[0] = 1;

## Lvalue (left value)

Lvalue is anything that can appear on the left side of the assignment operator

Because you should be able to put r[0] on the ...

## Arithmetic Operators

ClassName ClassName::operator+(const ClassName&)

// Add the current object that calls the plus and the second one in the argument, returns an object of the same class
