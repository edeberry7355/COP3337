#include <iostream>

void print_digits(int num);

int main(void) {
    print_digits(12345);

    return 0;
}

void print_digits(int num) {
    // Base case
    if (num <= 0) {
        return;
    }
    print_digits(num / 10);
    std::cout << num % 10 << std::endl;
}