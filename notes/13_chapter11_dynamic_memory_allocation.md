# Chapter 11: Dynamic Memory Allocation

## The Stack, the Heap, and Static

* static: global variable stroage, perament for the entire run fo the program
* stack: local variable storage. Every time a function delcares a new variable it is "pushed" onto the stack
  * The stack is a special region of memory, and automatically managed by the CPU, so you don't have to allocate or deallocate memory
* heap: dynamic storage (large pool of memory, not allocated in contiguous order)
  * Unlike the stack, there are generally no restrictions on the size of the heap (or the variables it creates), other than the physical size of memory in the machine. Variables created on the heap are accessible anywhere in the program.

## The Stack and the Heap

| Stack Memory | Heap Memory |
| --- | --- |
| Automatically managed | Manually managed (programmer controlled) |
| Fixed size | Flexible size |
| Fast allocation/deallocation | Slower than stack |
| Stores local variables | Used for dynamic allocation |

## Dynamic Persistent Memory Allocation

C++ supports dynamic memory allocation, which enables you to allocate persistent storage dynamically. The memory is created using the **new** operator

    int* p = new int(4)
    cout << "Enter the sie of the array: ";
    int size;
    cin >> size;
    int* list = new int[size];

## Advantage of Allocating Memory Dynamically

* When we do not know how much amount of memory would be needed for the program beforehand (size is determined at runtime, opposed to compile time)
* Objects in the heap have dynamic lifetime, meaning they can exist beyond the scope of the function or method that created them
* Enables handling of large data sets that may exceed stack memory limits, as dynamic memory is allocated on the heap, which is typically larger
* Complex data structures like linked lists, trees, and graphs are typically implemented using heap-allocated objects because they allow for efficient dynamic allocation and deallocation of nodes

## Delete/Free Memory

    delete p;
    delete [] list;

    // Use the delete keyword only with the pointer that points to the memory created by the new operator
    int x = 10;
    int* p = &x;
    delte p; // This is wrong

## Creating Dynamic Objects

To create an object dynamically, invoke the constructor for the object using the syntax

    ClassName* pObject = new ClassName();
    // OR
    ClassName pObject = new ClassName;

## Acessing Dynamic Objects

To access object members via a pointer, you must dereference the pointer an use the dot (.) operator to object's members. For example,

    string* p = new string("abcdefg");
    cout << "The first three characters in the string are " << (*p).substr(0, 3) << endl;
    cout << "The length of the string is " << (*p).length() << endl;;

C++ also provides a shorthand member selection operator for accessing object members from a pointer:

* The arrow (->) operator, for example,

    string* p = new string("abcdefg");
    cout << "The first three characters in the string are " << p->substr(0, 3) << endl;
    cout << "The length of the string is " << p->length() << endl;;

## Recap

How do you create a dynamic array of double variables?

    double *pD = new double[size];

How do you release memory?

    delete [] pD;

How do you create an object dynamically?

    ClassName* pObject = new ClassName();

## Question

Is the syntax correct?

    cout << (new string("Hello"))->length() << endl;

Yes, but you can't access the hello because we never saved the address. It creates an anonymous object dynamically on the heap, which causes a memory leak.

## Destructors

## Questions

Cannot invoke a destructor explicitly ().~_

## The this pointer

* The **this** pointer points to the calling object itself
* Sometimes you need to reference the hidden data field name in the function in order to set a new value to it
* A hidden data field can be accessed by using the **this*** keyword

    Circle::Circle(double radius) {
        this->radius = radius;
    }

## Copy Constructors

* Every class has a copy constructor, which is used to copy objects
* Each class may define several overloaded cosntructors and one destructor. Additionally, every class has a copy constructor, which can be used to create an object initialized with the data of another object of the same class

    ClassName(const ClassName&)

* The default copy constructor or assignment operator for copying objects performs a **shallow** copy, rather than a **deep** copy, meaning that if the field is a pointer to some object, the address of the pointer is copied rather than its contents

## Customizing Copy Constructors

You can customize the copy constructor to perform a deep copy

    Course::Course(const Course& course) {
        courseName = course.courseName;
        numberOfStudents = course.numberOfStudents;
        capacity = course.capacity;
        students = new string[capacity];
    }

## Example whiteboard

Hello hi
msg: dynamically allocate array of strings
size: 5

Hello hi2
msg


    Hello hi1(20);
    Hello hi2 = hi1;
    //Or
    Hello hi2(hi1);
    // Both of these ^ are bad bc if hi1 is deleted, trying to destruct hi2 will be an error

    // Instead, create an array of the same size for hi1
    // Then, do a for loop so that the values of the arrays equal each other
