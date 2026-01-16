/*
    Introduction to namespaces
*/

#include <iostream>

// Create the namespace
namespace first {
    int a;
}
// highlight stuff > shift+alt+down - copy and paste below (up to do above)
//  hold alt key to move pasted section up and down
namespace second {
    int a;
}

// :: - insertion seperation operator

int main(void) {
   first::a = 5;
   second::a = 10;

   std::cout << first::a << std::endl;
   std::cout << second::a << std::endl;

    return 0;
}