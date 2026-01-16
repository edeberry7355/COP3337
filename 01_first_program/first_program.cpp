/*
    The first C++ program.
    1/14/2026
*/

#include <iostream>

// int - returns as an integer
int main(void) {
    //cout - an object that works with data sent to the object
    std::cout << "Hello from COP3337!\n" << std::endl;

    std::cout <<"(15 * 78) + 14 is " << (15 * 78) + 14 << std::endl;
    
    /* std - standard namespace (can hide functions, variables, etc. in namespace)
     kind of a folder to store stuff  */
    // cout - console output (object of iostream class)
    // << - stream insertion operator
    // endl - end line (move the cursor in the terminal to the next line)


    // return a nonzero value represents an error, return zero means successfully completed code
    return 0;
}

// ctrl+b: show/hide left window